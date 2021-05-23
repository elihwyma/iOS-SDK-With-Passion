/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HFSelectedUserCollection, HMHome;

@interface HUPresenceActivationOptionItem : HFItem

{
    _Bool _selected;
    HMHome *_home;
    unsigned long long _activationGranularity;
    unsigned long long _eventType;
    unsigned long long _style;
    HFSelectedUserCollection *_selectedUsers;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) unsigned long long activationGranularity;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (retain, nonatomic) HFSelectedUserCollection *selectedUsers;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 selectedUsers:(id)arg2 activationGranularity:(unsigned long long)arg3 style:(unsigned long long)arg4 home:(id)arg5;
- (id)_summaryTitle;

@end
