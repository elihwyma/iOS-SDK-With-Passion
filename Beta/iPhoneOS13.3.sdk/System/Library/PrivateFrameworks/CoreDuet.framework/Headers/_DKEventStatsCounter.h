/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventStatsCounter : NSObject

{
    _DKEventStatsCounterInternal *_internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2;

- (unsigned long long)count;
- (id)eventName;
- (void)incrementCountByNumber:(unsigned long long)arg1;
- (void)incrementCount;

@end
