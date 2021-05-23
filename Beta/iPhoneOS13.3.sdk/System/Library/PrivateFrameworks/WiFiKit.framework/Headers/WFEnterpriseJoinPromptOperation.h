/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFUserPromptOperation.h>

#import <WiFiKit/Swift-Protocol.h>

@class NSString;

@interface WFEnterpriseJoinPromptOperation : WFUserPromptOperation <Swift>

{
    NSString *password;
    NSString *username;
    struct __SecIdentity *TLSIdentity;
}

@property (nonatomic, readonly) _Bool wantsModalPresentation;
@property (nonatomic, readonly) struct __SecIdentity *TLSIdentity;
@property (copy, nonatomic, readonly) NSString *username;
@property (copy, nonatomic, readonly) NSString *password;

+ (id)enterpriseJoinPromptOperationWithDeviceCapability:(long long)arg1;

@end
