/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@interface BWZoomRange : NSObject <Swift>

{
    float _lowerBound;
    float _upperBound;
    float _fudgedLowerBound;
    float _fudgedUpperBound;
    unsigned long long _hash;
}

@property (nonatomic, readonly) float lowerBound;
@property (nonatomic, readonly) float upperBound;
@property (nonatomic, readonly) float fudgedLowerBound;
@property (nonatomic, readonly) float fudgedUpperBound;

+ (id)zoomRangeWithLower:(float)arg1 upperBound:(float)arg2;
+ (id)fudgedZoomRangeWithLower:(float)arg1 upperBound:(float)arg2 fudgedLowerBound:(float)arg3 fudgedUpperBound:(float)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)applyFudgeToZoomFactor:(float)arg1;
- (id)initWithLowerBound:(float)arg1 upperBound:(float)arg2;
- (id)initWithLowerBound:(float)arg1 upperBound:(float)arg2 fudgedLowerBound:(float)arg3 fudgedUpperBound:(float)arg4;

@end
