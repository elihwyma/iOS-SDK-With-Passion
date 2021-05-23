/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXAction, ATXSlotSet, NSArray;

@interface ATXSlotResolutionParameters : NSObject

{
    ATXAction *_action;
    ATXSlotSet *_slots;
    NSArray *_values;
    unsigned long long _hash;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAction:(id)arg1 slots:(id)arg2;

@end
