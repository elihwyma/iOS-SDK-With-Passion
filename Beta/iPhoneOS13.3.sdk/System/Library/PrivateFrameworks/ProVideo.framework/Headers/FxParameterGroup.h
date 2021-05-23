/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxPinParameter.h>

@interface FxParameterGroup : FxPinParameter

{
    struct FxParameterGroupPriv *_groupPriv;
}

- (id)init;
- (void)dealloc;
- (id)subPins;
- (void)setSubPins:(id)arg1;

@end
