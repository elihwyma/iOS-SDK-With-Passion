/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSDContentLocation : NSObject <Swift>

{
    double _viewScale;
    struct CGPoint _unscaledPoint;
}

@property (nonatomic) struct CGPoint unscaledPoint;
@property (nonatomic) double viewScale;

+ (id)contentLocation;
+ (id)contentLocationWithUnscaledPoint:(struct CGPoint)arg1 viewScale:(double)arg2;
+ (id)contentLocationInterpolatingFromLocation:(id)arg1 toLocation:(id)arg2 fraction:(double)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
