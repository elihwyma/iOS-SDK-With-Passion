/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAConnectionPolicy : AceObject <Swift>

@property (copy, nonatomic) NSNumber *disableMPTCP;
@property (copy, nonatomic) NSNumber *enableOptimisticDNS;
@property (copy, nonatomic) NSNumber *enableTLS13;
@property (copy, nonatomic) NSNumber *enableTLS13ZeroRTT;
@property (copy, nonatomic) NSNumber *enableTcpFastOpen;
@property (nonatomic) _Bool enabled;
@property (copy, nonatomic) NSNumber *globalTimeout;
@property (copy, nonatomic) NSNumber *mptcpFallbackPort;
@property (copy, nonatomic) NSString *policyId;
@property (copy, nonatomic) NSArray *routes;
@property (copy, nonatomic) NSNumber *timeToLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)connectionPolicy;
+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
