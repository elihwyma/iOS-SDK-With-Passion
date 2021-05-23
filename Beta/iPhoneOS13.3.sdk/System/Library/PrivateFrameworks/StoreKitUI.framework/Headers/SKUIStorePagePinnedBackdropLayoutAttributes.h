/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <Swift>

{
    UIColor *_backdropColor;
    NSString *_backdropGroupName;
    long long _backdropStyle;
    _Bool _hidesBackdropView;
    double _transitionProgress;
}

@property (retain, nonatomic) UIColor *backdropColor;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long backdropStyle;
@property (nonatomic) _Bool hidesBackdropView;
@property (nonatomic) double transitionProgress;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
