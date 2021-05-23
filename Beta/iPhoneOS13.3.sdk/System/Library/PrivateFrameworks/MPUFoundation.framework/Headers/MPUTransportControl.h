/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@interface MPUTransportControl : NSObject

{
    unsigned long long _numberOfAvailableSlotsInContainer;
    _Bool _enabled;
    _Bool _highlighted;
    _Bool _supportsLongPress;
    _Bool _acceptsTapsWhenDisabled;
    int _group;
    long long _type;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) int group;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool supportsLongPress;
@property (nonatomic) _Bool acceptsTapsWhenDisabled;

+ (id)_transportControlsForMediaRemoteCommands:(struct __CFArray *)arg1 withAllowedTransportControlTypes:(id)arg2 allowsDisabledControls:(_Bool)arg3;
+ (void)_addTransportControl:(id)arg1 toTransportControlsArray:(id)arg2;
+ (id)_descriptionForTransportControlType:(long long)arg1;
+ (id)_descriptionForTransportControlGroup:(int)arg1;
+ (int)_groupForTransportControlType:(long long)arg1;
+ (_Bool)_transportControlAcceptsTapsWhenDisabledForType:(long long)arg1;
+ (_Bool)_transportControlSupportsHighlightingForCommand:(unsigned int)arg1;
+ (long long)_transportControlTypeForCommand:(unsigned int)arg1;
+ (id)_createTransportControlForType:(long long)arg1 withMediaRemoteCommand:(struct _MRMediaRemoteCommandInfo *)arg2;
+ (_Bool)_hasUnderlyingCommandForTransportControlType:(long long)arg1;
+ (id)availableTransportControlsForMediaRemoteCommands:(struct __CFArray *)arg1 controlsCount:(unsigned long long)arg2;
+ (id)transportControlsForControlTypes:(id)arg1 withMediaRemoteCommands:(struct __CFArray *)arg2;
+ (id)transportControlWithType:(long long)arg1 group:(int)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_priority;
- (long long)_compare:(id)arg1 ordering:(long long)arg2;
- (id)initWithType:(long long)arg1 group:(int)arg2;

@end
