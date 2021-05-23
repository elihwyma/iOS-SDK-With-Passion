/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CDPeriodicScheduler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerJob:(id)arg1;
- (void)unregisterJob:(id)arg1;
- (void)updateExecutionCriteriaOnJob:(id)arg1;

@end
