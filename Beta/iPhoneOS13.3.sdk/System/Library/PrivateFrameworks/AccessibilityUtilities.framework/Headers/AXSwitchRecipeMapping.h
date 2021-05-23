/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXReplayableGesture, NSString, NSUUID;

@interface AXSwitchRecipeMapping : NSObject

{
    _Bool _optional;
    NSString *_action;
    NSString *_longPressAction;
    AXReplayableGesture *_gesture;
    AXReplayableGesture *_longPressGesture;
    NSUUID *_switchUUID;
    long long _switchOriginalAction;
    struct CGPoint _holdPoint;
}

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *longPressAction;
@property (retain, nonatomic) AXReplayableGesture *gesture;
@property (retain, nonatomic) AXReplayableGesture *longPressGesture;
@property (nonatomic) struct CGPoint holdPoint;
@property (nonatomic, getter=isOptional) _Bool optional;
@property (copy, nonatomic) NSUUID *switchUUID;
@property (nonatomic) long long switchOriginalAction;

+ (id)recipeMappingWithDictionaryRepresentation:(id)arg1;

- (id)init;
- (id)description;
- (id)dictionaryRepresentation;

@end
