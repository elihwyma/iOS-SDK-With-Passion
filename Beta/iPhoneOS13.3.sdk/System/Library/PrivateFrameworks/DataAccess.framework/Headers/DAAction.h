/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@interface DAAction : NSObject

{
    _Bool _ignoresGuardianRestrictions;
    int _changeId;
    unsigned long long _itemChangeType;
    id _serverId;
    id _instanceId;
    id _changedItem;
    id _forwardedAttendees;
    id _forwardedAttendeeUUIDs;
}

@property (nonatomic) unsigned long long itemChangeType;
@property (retain, nonatomic) id serverId;
@property (retain, nonatomic) id instanceId;
@property (retain, nonatomic, setter=_setChangedItem:) id changedItem;
@property (nonatomic) int changeId;
@property (retain, nonatomic) id forwardedAttendees;
@property (retain, nonatomic) id forwardedAttendeeUUIDs;
@property (nonatomic) _Bool ignoresGuardianRestrictions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (id)stringForItemChangeType:(unsigned long long)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4;

@end
