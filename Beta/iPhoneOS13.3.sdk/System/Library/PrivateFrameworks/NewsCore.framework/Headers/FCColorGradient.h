/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray;

@interface FCColorGradient : NSObject <Swift>

{
    NSArray *_colors;
    NSArray *_locations;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property (nonatomic, readonly) struct CGPoint startPoint;
@property (nonatomic, readonly) struct CGPoint endPoint;
@property (nonatomic, readonly) NSArray *colors;
@property (nonatomic, readonly) NSArray *locations;

+ (id)colorGradientWithColors:(id)arg1 locations:(id)arg2;
+ (id)colorGradientWithConfigDict:(id)arg1;
+ (id)blackGradient;
+ (id)whiteGradient;
+ (id)colorGradientWithPBColorGradient:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 colors:(id)arg3 locations:(id)arg4;
- (_Bool)isSimilarToColorGradient:(id)arg1 withinPercentage:(double)arg2;
- (id)pbColorGradient;

@end
