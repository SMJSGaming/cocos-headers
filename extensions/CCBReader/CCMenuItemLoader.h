#ifndef _CCB_CCMENUITEMLOADER_H_
#define _CCB_CCMENUITEMLOADER_H_

#include "CCLayerLoader.h"

NS_CC_EXT_BEGIN

/* Forward declaration. */
class CCBReader;
/**
 *  @js NA
 *  @lua NA
 */
class CCMenuItemLoader : public CCNodeLoader {
    public:
        virtual ~CCMenuItemLoader() {};

    public:
        CCB_PURE_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CCMenuItem);

        virtual void onHandlePropTypeBlock(CCNode * pNode, CCNode * pParent, const char * pPropertyName, BlockData * pBlockData, CCBReader * pCCBReader);
        virtual void onHandlePropTypeCheck(CCNode * pNode, CCNode * pParent, const char * pPropertyName, bool pCheck, CCBReader * pCCBReader);
};

NS_CC_EXT_END

#endif
