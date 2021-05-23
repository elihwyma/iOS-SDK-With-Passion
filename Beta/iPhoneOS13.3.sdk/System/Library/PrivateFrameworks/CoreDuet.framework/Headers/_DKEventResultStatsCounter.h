/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventResultStatsCounter : NSObject

{
    _DKEventStatsCounterInternal *_internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2;

- (id)eventName;
- (void)incrementCountWithSuccess:(_Bool)arg1;
- (void)incrementCountByNumber:(unsigned long long)arg1 success:(_Bool)arg2;
- (unsigned long long)countWithSuccess:(_Bool)arg1;

@end
