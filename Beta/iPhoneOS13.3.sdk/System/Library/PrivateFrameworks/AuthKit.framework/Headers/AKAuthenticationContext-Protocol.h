/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <AuthKit/Swift-Protocol.h>

@class AKDevice, NSDictionary, NSString;

@protocol AKAuthenticationContext <Swift>

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;

@end
