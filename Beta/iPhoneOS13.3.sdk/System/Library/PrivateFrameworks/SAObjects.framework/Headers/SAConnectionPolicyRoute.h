/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SAConnectionPolicyRoute : AceObject <Swift>

@property (copy, nonatomic) NSString *cname;
@property (copy, nonatomic) NSString *connectionId;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSNumber *mptcp;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *resolver;
@property (copy, nonatomic) NSString *resolverProtocol;
@property (copy, nonatomic) NSString *routeId;
@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)connectionPolicyRoute;
+ (id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
