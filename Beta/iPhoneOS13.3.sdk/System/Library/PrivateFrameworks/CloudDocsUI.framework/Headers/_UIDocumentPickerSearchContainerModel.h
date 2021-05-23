/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel

{
    NSString *_queryString;
}

@property (copy, nonatomic) NSString *queryString;

- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;
- (id)scopes;
- (id)displayTitle;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;
- (void)startMonitoringChanges;
- (void)_updateObserverForQuery;
- (_Bool)shouldShowTopLevelContainers;
- (struct _UIArrayController *)_createObserver;

@end
