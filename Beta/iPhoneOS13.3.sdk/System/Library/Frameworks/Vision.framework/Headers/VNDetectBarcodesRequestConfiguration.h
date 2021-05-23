/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration

{
    NSArray *_symbologies;
    NSString *_locateMode;
}

@property (copy, nonatomic) NSArray *symbologies;
@property (copy, nonatomic) NSString *locateMode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
