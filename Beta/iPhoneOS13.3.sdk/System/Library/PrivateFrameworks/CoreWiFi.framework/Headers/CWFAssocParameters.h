/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class CWFEAPCredentials, CWFNetworkProfile, CWFScanResult, NSString;

@interface CWFAssocParameters : NSObject

{
    _Bool _rememberUponSuccessfulAssociation;
    CWFScanResult *_scanResult;
    CWFNetworkProfile *_knownNetworkProfile;
    NSString *_password;
    CWFEAPCredentials *_EAPCredentials;
}

@property (copy, nonatomic) CWFScanResult *scanResult;
@property (copy, nonatomic) CWFNetworkProfile *knownNetworkProfile;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) CWFEAPCredentials *EAPCredentials;
@property (nonatomic) _Bool rememberUponSuccessfulAssociation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToAssocParameters:(id)arg1;

@end
