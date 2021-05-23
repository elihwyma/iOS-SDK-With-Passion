/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString;

@protocol OS_dispatch_queue;

@interface WFResource : NSObject

{
    _Bool _available;
    _Bool _shouldRefreshAvailability;
    NSError *_availabilityError;
    NSDictionary *_definition;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
}

@property (nonatomic, readonly) _Bool shouldRefreshAvailability;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (copy, nonatomic, readonly) NSDictionary *definition;
@property (copy, nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (nonatomic, readonly) NSError *availabilityError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)isSingleton;
+ (_Bool)mustBeAvailableForDisplay;
+ (_Bool)refreshesAvailabilityOnApplicationResume;
+ (_Bool)alwaysMakeAvailable;

- (id)init;
- (void)dealloc;
- (_Bool)_isAvailable;
- (id)initWithDefinition:(id)arg1;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)refreshAvailability;
- (id)_availabilityError;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)refreshAvailabilityWithNotification;
- (void)refreshAvailabilityWithForcedNotification;
- (_Bool)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(_Bool)arg1;
- (void)notifyResourcesAboutAvailabilityChange;
- (void)refreshAvailabilityWithNotification:(_Bool)arg1;
- (void)updateAvailability:(_Bool)arg1 withError:(id)arg2;
- (void)invalidateAvailability;

@end
