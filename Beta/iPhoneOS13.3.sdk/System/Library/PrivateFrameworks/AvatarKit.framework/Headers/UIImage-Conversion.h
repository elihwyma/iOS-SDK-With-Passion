/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <UIKit/UIImage.h>

@interface UIImage (Conversion)

+ (id)animatedImageWithHEICSRepresentation:(id)arg1;
+ (id)animatedImageWithHEICRepresentation:(id)arg1;
+ (id)avt_animatedImageWithDataRepresentation:(id)arg1 ofType:(struct __CFString *)arg2;
+ (id)animatedImageWithAPNGRepresentation:(id)arg1;

- (id)HEICSRepresentation;
- (id)HEICRepresentation;
- (id)avt_dataRepresentationForType:(struct __CFString *)arg1;
- (float)frameDelayInSeconds;
- (id)APNGRepresentation;
- (id)copyByReorderingImagesWithFirstImageAtTime:(double)arg1;

@end
