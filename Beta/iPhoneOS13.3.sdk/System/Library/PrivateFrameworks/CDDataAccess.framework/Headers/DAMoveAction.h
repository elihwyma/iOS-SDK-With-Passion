/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
 */

#import <CDDataAccess/DAAction.h>

@class NSString;

@interface DAMoveAction : DAAction

{
    NSString *_sourceContainerId;
    NSString *_sourceServerId;
    NSString *_destinationContainerId;
}

@property (retain, nonatomic) NSString *sourceContainerId;
@property (retain, nonatomic) NSString *sourceServerId;
@property (retain, nonatomic) NSString *destinationContainerId;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;

@end
