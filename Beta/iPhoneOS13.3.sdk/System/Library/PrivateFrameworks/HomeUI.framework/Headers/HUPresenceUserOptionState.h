/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUPresenceUserOptionState : NSObject

{
    _Bool _selected;
    _Bool _locationAvailable;
    unsigned long long _activationGranularity;
}

@property (nonatomic, readonly) unsigned long long activationGranularity;
@property (nonatomic, readonly, getter=isSelected) _Bool selected;
@property (nonatomic, readonly, getter=isLocationAvailable) _Bool locationAvailable;

- (id)init;
- (id)initWithActivationGranularity:(unsigned long long)arg1 selected:(_Bool)arg2 locationAvailable:(_Bool)arg3;

@end
