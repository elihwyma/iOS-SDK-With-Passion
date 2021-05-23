/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSSet, NSString;

@protocol WiFiCandidateNetwork <Swift>

@property (copy, nonatomic) NSString *SSID;
@property (nonatomic, readonly) NSSet *accessPoints;
@property (copy, nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSSet *attributes;
@property (nonatomic) _Bool matched;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;

- (unsigned short)containsAccessPointMatchingBSSIDs: /* Error: Ran out of types for this method. */;

@end
