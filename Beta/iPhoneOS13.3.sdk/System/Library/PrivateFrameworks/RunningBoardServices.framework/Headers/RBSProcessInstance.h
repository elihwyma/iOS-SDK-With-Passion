/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

#import <RunningBoardServices/Swift-Protocol.h>

@class NSString, RBSProcessIdentifier, RBSProcessIdentity;

@interface RBSProcessInstance : NSObject <Swift>

{
    RBSProcessIdentity *_identity;
    RBSProcessIdentifier *_identifier;
}

@property (nonatomic, readonly) RBSProcessIdentifier *identifier;
@property (nonatomic, readonly) RBSProcessIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)instanceWithIdentifier:(id)arg1 identity:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)matchesProcess:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 identity:(id)arg2;
- (id)copyWithEuid:(unsigned int)arg1;
- (int)rbs_pid;
- (id)processPredicate;

@end
