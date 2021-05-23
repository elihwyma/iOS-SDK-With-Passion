/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@protocol WFFileStorageService;

@interface WFStorageServiceAction : WFAction

@property (nonatomic, readonly) id <WFFileStorageService> selectedStorageService;
@property (nonatomic, readonly) _Bool showsFilePicker;

- (id)keywords;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)outputContentClasses;
- (id)requiredResources;
- (_Bool)showsSettingsWhenResourcesUnavailable;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (id)filenamePlaceholderText;
- (void)updatePathPrefix;
- (id)filePathKey;
- (id)showPickerKey;
- (void)selectedStorageServiceChanged;

@end
