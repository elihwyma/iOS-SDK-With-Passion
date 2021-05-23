/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@interface _UIDocumentPickerRootContainerModel : _UIDocumentPickerURLContainerModel

{
    _Bool _isObservingContainers;
}

- (id)_containerListDidChange;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;
- (void)startMonitoringChanges;

@end
