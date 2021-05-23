/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCBackgroundActivityScheduler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_makeFullIdentifierFromIdentifier:(id)arg1;
- (long long)_makeFromFCResult:(long long)arg1;
- (void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(id)arg2 task:(CDUnknownBlockType)arg3;
- (void)cancelRepeatingTaskWithIdentifier:(id)arg1;
- (void)requestBackgroundAppRefreshStartingAfter:(id)arg1 before:(id)arg2;

@end
