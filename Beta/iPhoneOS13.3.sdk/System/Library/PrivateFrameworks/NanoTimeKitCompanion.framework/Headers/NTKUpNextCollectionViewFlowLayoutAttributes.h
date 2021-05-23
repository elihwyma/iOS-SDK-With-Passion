/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes

{
    _Bool _notVisibleToUser;
    _Bool _fullyVisibleToUser;
    double _darkeningAlphaUniform;
    double _shadowAlpha;
    double _scale;
    long long _layoutMode;
    struct CGRect _unitFrameOnScreen;
    struct CGRect _computedFrame;
}

@property (nonatomic) double darkeningAlphaUniform;
@property (nonatomic) struct CGRect unitFrameOnScreen;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) struct CGRect computedFrame;
@property (nonatomic) double scale;
@property (nonatomic) long long layoutMode;
@property (nonatomic) _Bool notVisibleToUser;
@property (nonatomic) _Bool fullyVisibleToUser;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
