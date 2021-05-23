/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface OZRigDropMenuTarget : NSObject

{
    struct OZRig *_pRig;
}

+ (id)rigDropMenuTargetForRig:(struct OZRig *)arg1;

- (void)setRig:(struct OZRig *)arg1;
- (void)pasteHelper:(unsigned int)arg1;
- (void)pasteToNewSwitch;
- (void)pasteToNewList;
- (void)pasteToNewSlider;

@end
