/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface MCDeviceUploadOrganization : NSObject

{
    NSString *_orgId;
    NSString *_orgName;
    NSArray *_approvers;
    NSNumber *_skipItrackCheckNum;
    NSNumber *_deviceAdditionDepEnabledNum;
    NSNumber *_idmsWhitelistingEnabledNum;
    NSNumber *_idmsRemoveDeviceEnabledNum;
    NSNumber *_deviceAdditionGbiEnabledNum;
}

@property (retain, nonatomic) NSNumber *skipItrackCheckNum;
@property (retain, nonatomic) NSNumber *deviceAdditionDepEnabledNum;
@property (retain, nonatomic) NSNumber *idmsWhitelistingEnabledNum;
@property (retain, nonatomic) NSNumber *idmsRemoveDeviceEnabledNum;
@property (retain, nonatomic) NSNumber *deviceAdditionGbiEnabledNum;
@property (nonatomic, readonly) NSString *orgId;
@property (nonatomic, readonly) NSString *orgName;
@property (nonatomic, readonly) NSArray *approvers;
@property (nonatomic, readonly) _Bool skipItrackCheck;
@property (nonatomic, readonly) _Bool deviceAdditionDepEnabled;
@property (nonatomic, readonly) _Bool idmsWhitelistingEnabled;
@property (nonatomic, readonly) _Bool idmsRemoveDeviceEnabled;
@property (nonatomic, readonly) _Bool deviceAdditionGbiEnabled;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)_approversFromApproversArray:(id)arg1;
- (id)initWithOrgId:(id)arg1 orgName:(id)arg2 approvers:(id)arg3 skipItrackCheck:(_Bool)arg4 deviceAdditionDepEnabled:(_Bool)arg5 idmsWhitelistingEnabled:(_Bool)arg6 idmsRemoveDeviceEnabled:(_Bool)arg7 deviceAdditionGbiEnabled:(_Bool)arg8;

@end
