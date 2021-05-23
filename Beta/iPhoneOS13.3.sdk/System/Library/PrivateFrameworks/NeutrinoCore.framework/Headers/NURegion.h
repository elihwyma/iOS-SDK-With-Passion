/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@interface NURegion : NSObject <Swift>

{
    struct Region *_imp;
}

+ (id)region;
+ (id)regionWithRect:(CDStruct_996ac03c)arg1;
+ (id)regionWithRegion:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (CDStruct_996ac03c)bounds;
- (id)initWithRect:(CDStruct_996ac03c)arg1;
- (double)density;
- (_Bool)intersectsRect:(CDStruct_996ac03c)arg1;
- (_Bool)intersectsRegion:(id)arg1;
- (double)area;
- (id)initWithRegion:(id)arg1;
- (_Bool)isEqualToRegion:(id)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (void)enumerateRects:(CDUnknownBlockType)arg1;
- (_Bool)includesRect:(CDStruct_996ac03c)arg1;
- (_Bool)includesRegion:(id)arg1;
- (id)regionByAddingRect:(CDStruct_996ac03c)arg1;
- (id)regionByRemovingRect:(CDStruct_996ac03c)arg1;
- (id)regionByRemovingRegion:(id)arg1;
- (id)regionByClippingToRect:(CDStruct_996ac03c)arg1;
- (id)regionByClippingToRegion:(id)arg1;
- (id)regionByExcludingRect:(CDStruct_996ac03c)arg1;
- (id)regionByExcludingRegion:(id)arg1;
- (id)regionByTranslatingBy:(CDStruct_912cb5d2)arg1;
- (id)regionByGrowingBy:(CDStruct_912cb5d2)arg1;
- (id)regionByGrowingBy:(CDStruct_912cb5d2)arg1 inRect:(CDStruct_996ac03c)arg2;
- (id)regionByShrinkingBy:(CDStruct_912cb5d2)arg1;
- (id)regionByShrinkingBy:(CDStruct_912cb5d2)arg1 inRect:(CDStruct_996ac03c)arg2;
- (id)regionByApplyingOrientation:(long long)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (id)regionByFlippingInRect:(CDStruct_996ac03c)arg1;
- (id)regionByScalingBy:(struct CGPoint)arg1 withRounding:(long long)arg2;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform)arg1 roundPolicy:(long long)arg2;
- (id)convertImageRegion:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toRect:(CDStruct_996ac03c)arg3;
- (id)regionWithSubregionsOfMinimumDensity:(double)arg1;

@end
