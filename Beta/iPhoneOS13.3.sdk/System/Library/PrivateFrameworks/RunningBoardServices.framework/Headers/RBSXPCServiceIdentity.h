/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSString, RBSProcessInstance, RBSXPCServiceDefinition;

__attribute__((visibility("hidden")))
@interface RBSXPCServiceIdentity : NSObject

{
    RBSXPCServiceDefinition *_definition;
    NSString *_sessionID;
    RBSProcessInstance *_host;
}

@property (nonatomic, readonly) RBSXPCServiceDefinition *definition;
@property (copy, nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) RBSProcessInstance *host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)identityWithDefinition:(id)arg1 sessionID:(id)arg2 host:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
