/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSString;

@interface RBSAssertionIdentifier : NSObject

{
    NSString *_desc;
    unsigned long long _hash;
    int _serverPid;
    int _clientPid;
    unsigned long long _count;
}

@property (nonatomic, readonly) int serverPid;
@property (nonatomic, readonly) int clientPid;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_next;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)identifierWithClientPid:(int)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)_initWithServerPid:(int)arg1 clientPid:(int)arg2 count:(unsigned long long)arg3;

@end
