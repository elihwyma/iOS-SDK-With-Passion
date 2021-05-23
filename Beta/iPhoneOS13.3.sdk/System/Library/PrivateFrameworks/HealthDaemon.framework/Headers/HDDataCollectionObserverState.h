/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDDataCollectionObserverState : NSObject <Swift>

{
    _Bool _isInBackground;
    _Bool _hasRunningWorkout;
}

@property (nonatomic, readonly) _Bool isInBackground;
@property (nonatomic, readonly) _Bool hasRunningWorkout;

+ (id)dataCollectionObserverStateInBackground:(_Bool)arg1 hasRunningWorkout:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
