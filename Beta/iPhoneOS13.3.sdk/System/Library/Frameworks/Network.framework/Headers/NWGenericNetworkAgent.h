/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject

{
    struct netagent *_internalNetagent;
}

@property struct netagent *internalNetagent;
@property (copy, nonatomic, readonly) NSString *privateDescription;
@property (nonatomic, readonly) NSString *agentDomain;
@property (nonatomic, readonly) NSString *agentType;
@property (nonatomic, readonly) NSString *agentDescription;
@property (nonatomic, readonly) NSUUID *agentUUID;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isKernelActivated) _Bool kernelActivated;
@property (nonatomic, readonly, getter=isUserActivated) _Bool userActivated;
@property (nonatomic, readonly, getter=isVoluntary) _Bool voluntary;
@property (nonatomic, readonly, getter=isSpecificUseOnly) _Bool specificUseOnly;
@property (nonatomic, readonly, getter=isNetworkProvider) _Bool networkProvider;

- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)initWithKernelAgent:(const struct netagent *)arg1;
- (_Bool)isNexusProvider;
- (_Bool)supportsBrowse;
- (_Bool)requiresAssert;
- (_Bool)supportsResolve;

@end
