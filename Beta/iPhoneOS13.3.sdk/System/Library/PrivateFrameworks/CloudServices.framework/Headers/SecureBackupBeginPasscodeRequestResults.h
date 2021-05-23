/*
 Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SecureBackupBeginPasscodeRequestResults : NSObject

{
    NSString *_iCloudEnvironment;
    NSString *_escrowFederation;
    NSData *_cert;
    NSString *_dsid;
    NSString *_uuid;
}

@property (readonly) NSString *iCloudEnvironment;
@property (readonly) NSString *escrowFederation;
@property (readonly) NSData *cert;
@property (readonly) NSString *dsid;
@property (readonly) NSString *uuid;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithiCloudEnvironment:(id)arg1 escrowFederation:(id)arg2 escrowResponse:(id)arg3 uuid:(id)arg4;

@end
