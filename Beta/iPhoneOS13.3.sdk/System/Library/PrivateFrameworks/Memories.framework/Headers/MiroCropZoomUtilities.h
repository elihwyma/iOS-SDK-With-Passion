/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MiroCropZoomUtilities : NSObject

- (struct CGRect)rectFromDesiredPosition:(CDStruct_869f9c67)arg1 outputAspectRatio:(float)arg2 image:(id)arg3;
- (struct CGRect)adjustKBRect:(struct CGRect)arg1 toContainRect:(struct CGRect)arg2 withinImageSize:(struct CGSize)arg3;
- (struct CGRect)horizontallyClampedImageRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (struct CGRect)verticallyClampedImageRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (_Bool)hasCompletedAnalysis:(id)arg1;
- (struct CGRect)produceCroppingFrameforImage:(id)arg1 withAsset:(id)arg2;
- (struct CGRect)clampImageRect:(struct CGRect)arg1 toImageSize:(struct CGSize)arg2;

@end
