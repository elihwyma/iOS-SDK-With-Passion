/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNCardPropertyGroup, CNMutableContact, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorViewController : UITableViewController <Swift>

{
    NSMutableArray *_propertyItems;
    NSString *_propertyKey;
    CNMutableContact *_contact;
    CNCardPropertyGroup *_propertyGroup;
    _Bool _editNames;
    _Bool _editingExistingContact;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool isPresentingModalViewController;

+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForEditingProperty:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)done:(id)arg1;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)cancel:(id)arg1;
- (id)contactViewCache;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerContactCellClass:(Class)arg1;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(_Bool)arg3;
- (void)_rebuildPropertyGroupItems:(_Bool)arg1;
- (void)validateContents;
- (void)_startEditingFirstCell;

@end
