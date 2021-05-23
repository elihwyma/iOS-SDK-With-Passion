/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARScreenImageCapturer : NSObject

{
    double _serverScale;
    long long _interfaceOrientation;
}

@property (nonatomic) double serverScale;
@property (nonatomic) long long interfaceOrientation;

+ (id)sharedData;
+ (struct CGImage *)screenShot;
+ (struct CGImage *)screenShotCA;
+ (struct CGImage *)scaleToSize:(struct CGImage *)arg1 newSize:(struct CGSize)arg2;

@end
