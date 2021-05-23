/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFEventBuilder.h>

@class HFSelectedUserCollection, NSString;

@interface HFPresenceEventBuilder : HFEventBuilder

{
    HFSelectedUserCollection *_users;
    unsigned long long _eventType;
    unsigned long long _activationGranularity;
}

@property (retain, nonatomic) HFSelectedUserCollection *users;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long activationGranularity;
@property (nonatomic, readonly) unsigned long long presenceEventType;
@property (nonatomic, readonly) unsigned long long presenceUserType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_selectedUsersForPresenceEvent:(id)arg1;

- (id)initWithEvent:(id)arg1;
- (id)buildNewEventFromCurrentState;

@end
