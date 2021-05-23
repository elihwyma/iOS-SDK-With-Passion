/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class UIColor;

@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout

{
    UIColor *_evenColor;
    long long _numberOfColumns;
    UIColor *_oddColor;
}

@property (copy, nonatomic) UIColor *evenRowBackgroundColor;
@property (copy, nonatomic) UIColor *oddRowBackgroundColor;
@property (nonatomic) long long numberOfColumns;

+ (Class)layoutAttributesClass;

- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end
