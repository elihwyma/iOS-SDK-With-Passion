/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFTransformItemProvider, HUPresenceActivationOptionItem;

@interface HUPresenceActivationOptionState : NSObject

{
    _Bool _expanded;
    struct HFTransformItemProvider *_userOptionItemProvider;
    HUPresenceActivationOptionItem *_activationOptionItem;
}

@property (nonatomic, readonly) HFTransformItemProvider *userOptionItemProvider;
@property (nonatomic, readonly) HUPresenceActivationOptionItem *activationOptionItem;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic, readonly) unsigned long long activationGranularity;

- (id)init;
- (id)initWithUserOptionItemProvider:(struct HFTransformItemProvider *)arg1 activationOptionItem:(id)arg2;

@end
