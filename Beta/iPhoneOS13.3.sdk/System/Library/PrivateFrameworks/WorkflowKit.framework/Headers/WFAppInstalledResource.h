/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFResource.h>

@class ICApp, NSObject, NSString, WFiTunesSessionManager;

@protocol OS_dispatch_queue;

@interface WFAppInstalledResource : WFResource

{
    _Bool _skipLookup;
    NSString *_appName;
    WFiTunesSessionManager *_currentAppNameLookupSessionManager;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) WFiTunesSessionManager *currentAppNameLookupSessionManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) _Bool skipLookup;
@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) ICApp *app;

+ (_Bool)mustBeAvailableForDisplay;
+ (_Bool)refreshesAvailabilityOnApplicationResume;

- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)eventDictionary;
- (void)refreshAvailability;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (id)appNotInstalledError;

@end
