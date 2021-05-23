/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMapTable, NSSet;

@protocol REActivityTrackerDelegate;

@interface REActivityTracker : NSObject

{
    struct {
        unsigned int implementsBeginActivity:1;
        unsigned int implementsEndActivity:1;
        unsigned int implementsBeginActivityForObject:1;
        unsigned int implementsEndActivityForObject:1;
    } delegateCallbacks;
    NSCountedSet *_activities;
    NSMapTable *_activitiesByObject;
    id <REActivityTrackerDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <REActivityTrackerDelegate> delegate;
@property (nonatomic, readonly) NSSet *outstandingActivities;

- (id)initWithDelegate:(id)arg1;
- (void)beginActivity:(id)arg1 forObject:(id)arg2;
- (void)endActivity:(id)arg1 forObject:(id)arg2;
- (void)trackObject:(id)arg1;
- (void)withdrawObject:(id)arg1;
- (id)outstandingActivitiesForObject:(id)arg1;
- (_Bool)trackingObject:(id)arg1;

@end
