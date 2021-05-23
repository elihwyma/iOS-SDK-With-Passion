/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFStorageServiceAction.h>

@protocol WFFileStorageServiceOperation;

@interface WFSaveFileAction : WFStorageServiceAction

{
    id <WFFileStorageServiceOperation> _saveOperation;
}

@property (retain, nonatomic) id <WFFileStorageServiceOperation> saveOperation;

- (void)cancel;
- (void)finishRunningWithError:(id)arg1;
- (_Bool)outputsMultipleItems;
- (_Bool)inputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (id)filePathKey;
- (id)showPickerKey;

@end
