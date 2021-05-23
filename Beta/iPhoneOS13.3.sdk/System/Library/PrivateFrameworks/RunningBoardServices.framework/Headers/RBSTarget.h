/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

#import <RunningBoardServices/Swift-Protocol.h>

@class NSString, RBSProcessIdentifier, RBSProcessIdentity;

@interface RBSTarget : NSObject <Swift>

{
    RBSProcessIdentifier *_processIdentifier;
    RBSProcessIdentity *_processIdentity;
    NSString *_environment;
    NSString *_picoDesc;
}

@property (nonatomic, readonly, getter=isSystem) _Bool system;
@property (nonatomic, readonly) RBSProcessIdentifier *processIdentifier;
@property (nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (copy, nonatomic, readonly) NSString *environment;
@property (nonatomic, readonly) NSString *picoDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)targetWithProcessIdentity:(id)arg1;
+ (id)currentProcess;
+ (id)targetWithProcessIdentifier:(id)arg1;
+ (id)targetWithProcessIdentifier:(id)arg1 environmentIdentifier:(id)arg2;
+ (id)systemTarget;
+ (id)targetWithProcessIdentity:(id)arg1 environmentIdentifier:(id)arg2;
+ (id)targetWithPid:(int)arg1;
+ (id)targetWithPid:(int)arg1 environmentIdentifier:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)euid;
- (_Bool)matchesProcess:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)processPredicate;
- (id)_initWithProcessIdentifier:(id)arg1 processIdentity:(id)arg2 environmentIdentifier:(id)arg3 euid:(unsigned int)arg4;

@end
