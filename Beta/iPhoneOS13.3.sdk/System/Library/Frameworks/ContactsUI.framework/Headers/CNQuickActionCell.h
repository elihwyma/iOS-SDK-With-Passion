/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionViewCell.h>

@class CNQuickActionButton;

__attribute__((visibility("hidden")))
@interface CNQuickActionCell : UICollectionViewCell

{
    _Bool _showTitle;
    _Bool _showBackgroundPlatter;
    CNQuickActionButton *_button;
}

@property (retain, nonatomic) CNQuickActionButton *button;
@property (nonatomic) _Bool showTitle;
@property (nonatomic) _Bool showBackgroundPlatter;

- (id)initWithFrame:(struct CGRect)arg1;

@end
