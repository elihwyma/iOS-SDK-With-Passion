/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OZFxPlugColorGamutHandler : NSObject

{
    struct OZFxPlugSharedBase *sharedBase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)colorPrimaries;
- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;
- (id)colorMatrixFromDesiredRGBToYCbCrAtTime:(CDUnion_baaf6063)arg1;
- (id)colorMatrixFromYCbCrToDesiredRGBAtTime:(CDUnion_baaf6063)arg1;
- (id)pcFloat33MatrixToFxMatrix44:(const float *)arg1;
- (id)colorMatrixFromDesiredRGBToYCbCr;
- (id)colorMatrixFromYCbCrToDesiredRGB;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;

@end
