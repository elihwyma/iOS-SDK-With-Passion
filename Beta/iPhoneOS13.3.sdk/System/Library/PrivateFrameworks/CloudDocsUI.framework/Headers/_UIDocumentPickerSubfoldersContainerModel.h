/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel

{
    NSString *_containerID;
}

- (id)scopes;
- (id)displayTitle;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (void)startMonitoringChanges;
- (_Bool)shouldShowTopLevelContainers;
- (struct _UIArrayController *)_createObserver;
- (id)initWithPickableTypes:(id)arg1 container:(id)arg2;

@end
