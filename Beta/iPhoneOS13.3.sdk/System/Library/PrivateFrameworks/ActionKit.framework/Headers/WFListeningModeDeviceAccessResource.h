/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAccessResource.h>

@interface WFListeningModeDeviceAccessResource : WFAccessResource

{
    unsigned long long _managerState;
    CDUnknownBlockType _availabilityCompletion;
}

@property (nonatomic) unsigned long long managerState;
@property (copy, nonatomic) CDUnknownBlockType availabilityCompletion;

+ (_Bool)isSingleton;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (void)handleNotification:(id)arg1;
- (unsigned long long)globalLevelStatus;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)workflowLevelStatus;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (void)installObserversIfNecessary;
- (id)unavailableAccessResourceError;
- (id)localizedAccessResourceErrorString;

@end
