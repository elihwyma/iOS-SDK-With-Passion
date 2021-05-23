/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURL, SFAnalyticsActivityTracker;

@protocol OS_dispatch_queue, OS_os_log;

@interface SFSignInAnalytics : NSObject

{
    _Bool _stopped;
    _Bool _canceled;
    NSString *_eventName;
    NSString *_category;
    NSString *_signin_uuid;
    NSString *_my_uuid;
    NSString *_parent_uuid;
    NSString *_persistencePath;
    NSURL *_persistedEventPlist;
    NSMutableDictionary *_eventDependencyList;
    NSMutableArray *_builtDependencyChains;
    NSObject<OS_os_log> *_logObject;
    NSNumber *_measurement;
    NSObject<OS_dispatch_queue> *_queue;
    SFSignInAnalytics *_root;
    SFAnalyticsActivityTracker *_tracker;
}

@property (copy, nonatomic) NSString *signin_uuid;
@property (copy, nonatomic) NSString *my_uuid;
@property (copy, nonatomic) NSString *parent_uuid;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *persistencePath;
@property (retain, nonatomic) NSURL *persistedEventPlist;
@property (retain, nonatomic) NSMutableDictionary *eventDependencyList;
@property (retain, nonatomic) NSMutableArray *builtDependencyChains;
@property (nonatomic) _Bool canceled;
@property (nonatomic) _Bool stopped;
@property (retain, nonatomic) NSObject<OS_os_log> *logObject;
@property (retain, nonatomic) NSNumber *measurement;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SFSignInAnalytics *root;
@property (retain, nonatomic) SFAnalyticsActivityTracker *tracker;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (id)logForCategoryName:(id)arg1;
- (id)newLogForCategoryName:(id)arg1;
- (_Bool)writeDependencyList:(id *)arg1;
- (id)initWithSignInUUID:(id)arg1 category:(id)arg2 eventName:(id)arg3;
- (id)initChildWithSignInUUID:(id)arg1 andCategory:(id)arg2 andEventName:(id)arg3;
- (id)newSubTaskForEvent:(id)arg1;
- (void)logRecoverableError:(id)arg1;
- (void)logUnrecoverableError:(id)arg1;
- (void)stopWithAttributes:(id)arg1;
- (_Bool)writeResultsToTmp;
- (void)processEventChainForUUID:(id)arg1 dependencyChain:(id)arg2;
- (void)signInCompleted;

@end
