/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

@class NSIndexPath, NSLayoutConstraint, NSString, UIButton, UILabel;

@protocol UIDebuggingInformationHierarchyCellDelegate;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell

{
    UIButton *_disclosureButton;
    UILabel *_mainLabel;
    UIButton *_infoButton;
    NSIndexPath *_indexPath;
    _Bool _collapsedBeneath;
    NSLayoutConstraint *_disclosureButtonAvailableConstraint;
    NSLayoutConstraint *_disclosureButtonUnavailableConstraint;
    _Bool _disclosureIndicatorHidden;
    NSString *_name;
    id <UIDebuggingInformationHierarchyCellDelegate> _delegate;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) UIButton *infoButton;
@property (weak, nonatomic) id <UIDebuggingInformationHierarchyCellDelegate> delegate;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) _Bool disclosureIndicatorHidden;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)deliverToggle;
- (void)displayDetailsForCell;

@end
