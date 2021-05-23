/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface IMPeople : NSObject

{
    NSMutableArray *_people;
    int _coalesceCount;
    _Bool _hidePeople;
}

@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) NSArray *people;
@property (nonatomic, setter=setShouldHidePeople:) _Bool hidePeople;
@property (nonatomic, readonly) _Bool coalescingChanges;
@property (nonatomic, readonly) unsigned long long count;

- (void)dealloc;
- (void)beginCoalescedChanges;
- (void)imHandle:(id)arg1 buddyStatusChanged:(_Bool)arg2;
- (void)endCoalescedChanges;
- (_Bool)removeIMHandle:(id)arg1;
- (_Bool)addIMHandle:(id)arg1;
- (void)addedIMHandle:(id)arg1;
- (void)removedIMHandle:(id)arg1;
- (void)_addedPeople:(id)arg1;
- (_Bool)addPeopleFromArray:(id)arg1 skipMe:(_Bool)arg2;
- (void)removeNotificationObserver:(id)arg1;
- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)containsIMHandle:(id)arg1;
- (_Bool)removePeopleFromArray:(id)arg1;
- (_Bool)addPeopleFromArray:(id)arg1;

@end
