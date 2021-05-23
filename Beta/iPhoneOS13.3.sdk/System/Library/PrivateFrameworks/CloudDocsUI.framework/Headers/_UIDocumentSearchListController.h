/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIDocumentListController.h>

@class NSString, _UIDocumentPickerSearchContainerModel;

@interface _UIDocumentSearchListController : _UIDocumentListController

{
    _UIDocumentPickerSearchContainerModel *_model;
}

@property (retain, nonatomic) NSString *queryString;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (id)init;
- (id)initWithModel:(id)arg1;
- (_Bool)hideSearchField;
- (Class)_classForChildren;
- (void)itemsOrSelectionDidChange:(_Bool)arg1;

@end
