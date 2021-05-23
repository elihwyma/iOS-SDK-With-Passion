/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDBorders : NSObject <Swift>

{
    EDResources *mResources;
    unsigned long long mLeftBorderIndex;
    unsigned long long mRightBorderIndex;
    unsigned long long mTopBorderIndex;
    unsigned long long mBottomBorderIndex;
    unsigned long long mDiagonalBorderIndex;
    unsigned long long mVerticalBorderIndex;
    unsigned long long mHorizontalBorderIndex;
}

+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 resources:(id)arg6;
+ (id)bordersWithResources:(id)arg1;
+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 vertical:(id)arg6 horizontal:(id)arg7 resources:(id)arg8;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setRightBorder:(id)arg1;
- (id)rightBorder;
- (id)initWithResources:(id)arg1;
- (id)topBorder;
- (id)bottomBorder;
- (void)setTopBorder:(id)arg1;
- (void)setBottomBorder:(id)arg1;
- (id)leftBorder;
- (void)setLeftBorder:(id)arg1;
- (void)setVerticalBorder:(id)arg1;
- (void)setHorizontalBorder:(id)arg1;
- (_Bool)isEqualToBorders:(id)arg1;
- (void)setDiagonalBorder:(id)arg1;
- (id)verticalBorder;
- (id)horizontalBorder;
- (id)diagonalBorder;

@end
