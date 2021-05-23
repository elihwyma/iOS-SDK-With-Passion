/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsCounter : NSObject

{
    _DKEventStatsCounterInternal *_internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;

- (id)eventName;
- (void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2;
- (id)eventType;
- (id)typeValues;
- (void)incrementCountWithTypeValue:(id)arg1;
- (unsigned long long)countWithTypeValue:(id)arg1;

@end
