/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@interface FCColor : NSObject <Swift>

{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double alpha;

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)clearColor;
+ (id)colorWithHexString:(id)arg1;
+ (id)nullableColorWithHexString:(id)arg1;
+ (id)colorWithPBColor:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)legibleColor;
- (_Bool)isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (void)readDeconstructedRepresentationWithAcccessor:(CDUnknownBlockType)arg1;
- (id)pbColor;

@end
