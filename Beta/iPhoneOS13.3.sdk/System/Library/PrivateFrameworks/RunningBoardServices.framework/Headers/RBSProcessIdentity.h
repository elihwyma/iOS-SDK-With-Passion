/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

#import <RunningBoardServices/Swift-Protocol.h>

@class NSString, RBSProcessIdentifier, RBSXPCServiceIdentity;

@interface RBSProcessIdentity : NSObject <Swift>

{
    unsigned long long _hash;
    int _instanceID;
    unsigned char _type;
    RBSXPCServiceIdentity *_serviceIdentity;
    unsigned int _euid;
    NSString *_executablePath;
    NSString *_picoDesc;
    NSString *_description;
    NSString *_embeddedApplicationIdentifier;
    NSString *_daemonJobLabel;
}

@property (nonatomic, readonly, getter=isDefaultManaged) _Bool defaultManaged;
@property (nonatomic, readonly, getter=isExtension) _Bool extension;
@property (copy, nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) _Bool inheritsCoalitionBand;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly) NSString *picoDesc;
@property (nonatomic, readonly, getter=isEmbeddedApplication) _Bool embeddedApplication;
@property (copy, nonatomic, readonly) NSString *embeddedApplicationIdentifier;
@property (nonatomic, readonly, getter=isDaemon) _Bool daemon;
@property (copy, nonatomic, readonly) NSString *daemonJobLabel;
@property (nonatomic, readonly, getter=isXPCService) _Bool XPCService;
@property (copy, nonatomic, readonly) NSString *xpcServiceIdentifier;
@property (copy, nonatomic, readonly) RBSProcessIdentity *hostIdentity;
@property (copy, nonatomic, readonly) RBSProcessIdentifier *hostIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1 euid:(unsigned int)arg2;
+ (id)identityForDaemonJobLabel:(id)arg1;
+ (id)_identityForXPCServicePath:(id)arg1 properties:(id)arg2 pid:(int)arg3 euid:(unsigned int)arg4 host:(id)arg5;
+ (id)identityOfCurrentProcess;
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1;
+ (id)identityForDaemonPlistPath:(id)arg1;
+ (id)identityForLaunchProperties:(id)arg1 pid:(int)arg2 euid:(unsigned int)arg3;
+ (id)identityForExecutablePath:(id)arg1 pid:(int)arg2 euid:(unsigned int)arg3;
+ (id)identityForXPCServiceIdentifier:(id)arg1;
+ (id)identityForXPCServicePath:(id)arg1 host:(id)arg2;
+ (id)identityForXPCServiceProperties:(id)arg1 pid:(int)arg2 euid:(unsigned int)arg3 host:(id)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (_Bool)matchesProcess:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)processPredicate;
- (id)_initWithEmbeddedApplicationID:(id)arg1 xpcServiceID:(id)arg2 daemonJobLabel:(id)arg3 executablePath:(id)arg4 instanceID:(int)arg5 euid:(unsigned int)arg6;
- (_Bool)isAnonymousExecutable;
- (void)_initPicoDesc;
- (_Bool)_matchesIdentity:(id)arg1;
- (_Bool)isEqualToIdentity:(id)arg1;

@end
