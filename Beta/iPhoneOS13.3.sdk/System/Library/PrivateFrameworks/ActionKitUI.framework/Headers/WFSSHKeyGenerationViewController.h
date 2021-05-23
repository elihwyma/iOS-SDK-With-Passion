/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSNumber, WFSegmentedControlTableItem, WFTableDataSource, WFTableSection, WFTextFieldTableItem;

@protocol WFSSHKeyGenerationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFSSHKeyGenerationViewController : UITableViewController

{
    id <WFSSHKeyGenerationViewControllerDelegate> _delegate;
    WFTableDataSource *_dataSource;
    WFTableSection *_keyTypeSection;
    WFTableSection *_keySizeSection;
    WFTableSection *_commentSection;
    WFSegmentedControlTableItem *_keyTypeItem;
    WFSegmentedControlTableItem *_keySizeItem;
    Class _currentFormat;
    NSNumber *_currentKeySize;
    WFTextFieldTableItem *_commentItem;
}

@property (nonatomic, readonly) WFTableDataSource *dataSource;
@property (nonatomic, readonly) WFTableSection *keyTypeSection;
@property (nonatomic, readonly) WFTableSection *keySizeSection;
@property (nonatomic, readonly) WFTableSection *commentSection;
@property (nonatomic, readonly) WFSegmentedControlTableItem *keyTypeItem;
@property (nonatomic, readonly) WFSegmentedControlTableItem *keySizeItem;
@property (nonatomic) Class currentFormat;
@property (retain, nonatomic) NSNumber *currentKeySize;
@property (nonatomic, readonly) WFTextFieldTableItem *commentItem;
@property (weak, nonatomic) id <WFSSHKeyGenerationViewControllerDelegate> delegate;

- (id)init;
- (void)viewDidLoad;
- (void)donePressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)updateVisibleItems;
- (void)authenticationTypeDidChange:(id)arg1;
- (void)keySizeDidChange:(id)arg1;
- (void)generateKeyPairAndFinish;

@end
