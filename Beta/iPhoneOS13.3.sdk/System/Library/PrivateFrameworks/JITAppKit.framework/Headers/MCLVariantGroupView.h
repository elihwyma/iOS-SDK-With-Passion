/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <UIView.h>

@class NSMutableArray;

@interface MCLVariantGroupView : UIView

{
    NSMutableArray *_buttons;
    NSMutableArray *_buttonConstraints;
    long long _selectedIndex;
    _Bool _actionVariant;
    Class _buttonClass;
    long long _buttonType;
    long long _variantCount;
    long long _variantsPerLine;
}

@property (retain, nonatomic) Class buttonClass;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long variantCount;
@property (nonatomic) long long variantsPerLine;
@property (nonatomic) _Bool actionVariant;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (void)clearVariants;
- (id)createVariantButton:(Class)arg1 type:(long long)arg2;
- (void)selectVariant:(id)arg1;
- (void)selectItemAtIndex:(long long)arg1;

@end
