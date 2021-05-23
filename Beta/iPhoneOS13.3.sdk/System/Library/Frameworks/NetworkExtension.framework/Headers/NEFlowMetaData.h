/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface NEFlowMetaData : NSObject

{
    _Bool _fastOpenRequested;
    _Bool _multipathRequested;
    NSData *_sourceAppUniqueIdentifier;
    NSString *_sourceAppSigningIdentifier;
    NSData *_sourceAppAuditToken;
}

@property (readonly) _Bool fastOpenRequested;
@property (readonly) _Bool multipathRequested;
@property (readonly) NSData *sourceAppUniqueIdentifier;
@property (readonly) NSString *sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppAuditToken;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFromFlow:(struct _NEFlow *)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(_Bool)arg3 multipathRequested:(_Bool)arg4 audit_token:(id)arg5;
- (id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2;

@end
