/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PETEventTracker;

@interface _DKEventStatsCounterInternal : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _hasType;
    _Bool _hasResult;
    unsigned long long _numCounters;
    unsigned long long *_counters;
    NSString *_eventName;
    NSString *_eventType;
    NSArray *_typeValues;
    NSString *_domain;
    PETEventTracker *_eventTracker;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) NSArray *typeValues;
@property (nonatomic, readonly) NSString *domain;
@property (readonly) PETEventTracker *eventTracker;

- (void)dealloc;
- (id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(_Bool)arg5 scalar:(_Bool)arg6;
- (long long)indexOfTypeValue:(id)arg1 success:(_Bool)arg2;
- (id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(_Bool)arg5;
- (void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(_Bool)arg3;
- (unsigned long long)countWithTypeValue:(id)arg1 success:(_Bool)arg2;

@end
