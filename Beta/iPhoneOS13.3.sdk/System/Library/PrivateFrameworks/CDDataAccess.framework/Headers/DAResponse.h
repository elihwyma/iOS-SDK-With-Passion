/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
 */

#import <CDDataAccess/DAAction.h>

@interface DAResponse : DAAction

{
    long long _status;
}

@property (nonatomic) long long status;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(long long)arg4;

@end
