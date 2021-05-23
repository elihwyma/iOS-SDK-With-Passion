/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

#import <ClockKit/Swift-Protocol.h>

@class NSHashTable, NSLock, NSNumber, NSSet, NSString, NSXPCConnection;

@protocol CLKComplicationClientDelegate;

@interface CLKComplicationClient : NSObject <Swift>

{
    NSXPCConnection *_connection;
    NSHashTable *_invalidationObservers;
    NSLock *_invalidationObserversLock;
    _Bool _invalidated;
    NSString *_clientIdentifier;
    NSString *_clientBundlePath;
    NSNumber *_pid;
    id <CLKComplicationClientDelegate> _delegate;
    NSSet *_activeComplications;
    CDUnknownBlockType _checkinHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType checkinHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientBundlePath;
@property (nonatomic, readonly) NSNumber *pid;
@property (weak, nonatomic) id <CLKComplicationClientDelegate> delegate;
@property (copy, nonatomic) NSSet *activeComplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithConnection:(id)arg1;
- (void)_handleConnectionInvalidated;
- (void)checkinWithClientIdentifier:(id)arg1 bundlePath:(id)arg2;
- (void)reloadTimelineForComplication:(id)arg1;
- (void)extendTimelineForComplication:(id)arg1;
- (void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineStartDateForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineEndDateForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getAlwaysOnTemplateForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getNextRequestedUpdateDateWithHandler:(CDUnknownBlockType)arg1;
- (void)requestedUpdateDidBegin;
- (void)requestedUpdateBudgetExhausted;
- (void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)addInvalidationObserver:(id)arg1;
- (void)removeInvalidationObserver:(id)arg1;

@end
