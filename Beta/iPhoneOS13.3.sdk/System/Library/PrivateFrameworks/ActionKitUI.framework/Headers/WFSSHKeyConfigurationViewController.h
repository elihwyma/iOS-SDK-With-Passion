/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSString, WFBasicTableItem, WFSSHKeyPair, WFTableDataSource, WFTableSection;

@protocol WFSSHKeyConfigurationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFSSHKeyConfigurationViewController : UITableViewController

{
    id <WFSSHKeyConfigurationViewControllerDelegate> _delegate;
    WFTableDataSource *_dataSource;
    WFTableSection *_keyInfoSection;
    WFTableSection *_actionsSection;
    WFBasicTableItem *_typeItem;
    WFBasicTableItem *_md5HashItem;
    WFBasicTableItem *_sha256HashItem;
    WFBasicTableItem *_bitsItem;
    WFBasicTableItem *_commentItem;
    WFBasicTableItem *_exportItem;
    WFBasicTableItem *_generateItem;
    WFSSHKeyPair *_keyPair;
}

@property (nonatomic, readonly) WFTableDataSource *dataSource;
@property (nonatomic, readonly) WFTableSection *keyInfoSection;
@property (nonatomic, readonly) WFTableSection *actionsSection;
@property (nonatomic, readonly) WFBasicTableItem *typeItem;
@property (nonatomic, readonly) WFBasicTableItem *md5HashItem;
@property (nonatomic, readonly) WFBasicTableItem *sha256HashItem;
@property (nonatomic, readonly) WFBasicTableItem *bitsItem;
@property (nonatomic, readonly) WFBasicTableItem *commentItem;
@property (nonatomic, readonly) WFBasicTableItem *exportItem;
@property (nonatomic, readonly) WFBasicTableItem *generateItem;
@property (retain, nonatomic) WFSSHKeyPair *keyPair;
@property (weak, nonatomic) id <WFSSHKeyConfigurationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)publicKey;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)donePressed:(id)arg1;
- (void)keyGenerationViewController:(id)arg1 didFinishWithKeyPair:(id)arg2;
- (void)updateVisibleItems;
- (id)truncatedHash:(id)arg1;
- (id)localizedDisplayNameForType:(unsigned long long)arg1;
- (void)showHashWithType:(unsigned long long)arg1;

@end
