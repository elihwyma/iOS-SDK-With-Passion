/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSSet, PBCodable, TBLocalFetchRequestDescriptor;

@protocol TBFetchRequestDescriptor <Swift>

@property (nonatomic, readonly) PBCodable *remoteRequest;
@property (nonatomic, readonly) Class remoteRequestClass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (nonatomic, readonly) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (nonatomic, readonly) NSSet *tileItems;

@end
