/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFStorageServiceAction.h>

@interface WFGetFileAction : WFStorageServiceAction

- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (_Bool)outputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (id)filenamePlaceholderText;
- (id)filePathKey;
- (id)showPickerKey;
- (void)selectedStorageServiceChanged;
- (_Bool)multipleSelectionEnabled;
- (void)updateVisibleParameters;

@end
