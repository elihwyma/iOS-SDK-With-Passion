/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString;

@protocol OS_xpc_object;

@interface SBSRemoteAlertConfigurationContext : NSObject

{
    NSDictionary *_userInfo;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSSet *_actions;
    NSDictionary *_legacyAlertOptions;
}

@property (copy, nonatomic, readonly) NSDictionary *legacyAlertOptions;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;
@property (copy, nonatomic) NSSet *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)configurationContextWithLegacyAlertOptions:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
