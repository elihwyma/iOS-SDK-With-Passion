/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AXSSInterDeviceSwitchEvent : NSObject

{
    _Bool _isDown;
    NSString *_switchIdentifier;
    NSString *_switchDisplayName;
    NSString *_deviceIdentifier;
    NSArray *_actions;
    NSArray *_longPressActions;
}

@property (copy, nonatomic) NSString *switchIdentifier;
@property (copy, nonatomic) NSString *switchDisplayName;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSArray *longPressActions;
@property (nonatomic) _Bool isDown;

- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 longPressActions:(id)arg5 isDown:(_Bool)arg6;
- (id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 isDown:(_Bool)arg5;

@end
