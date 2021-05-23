/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString, SGEvent;

@interface SGRealtimeEvent : NSObject

{
    _Bool _isHarvested;
    int _state;
    SGEvent *_event;
    NSString *_eventIdentifier;
}

@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) SGEvent *event;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) _Bool isHarvested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)realtimeEventForNewEvent:(id)arg1;
+ (id)realtimeEventForNewEvent:(id)arg1 harvested:(_Bool)arg2;
+ (id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2;
+ (id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(_Bool)arg3;
+ (id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2;
+ (id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 harvested:(_Bool)arg3;
+ (id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2;
+ (id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(_Bool)arg3;
+ (id)realtimeEventForNearDuplicateEvent:(id)arg1;
+ (id)realtimeEventForNearDuplicateEvent:(id)arg1 harvested:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(_Bool)arg4;
- (_Bool)isEqualToRealtimeEvent:(id)arg1;

@end
