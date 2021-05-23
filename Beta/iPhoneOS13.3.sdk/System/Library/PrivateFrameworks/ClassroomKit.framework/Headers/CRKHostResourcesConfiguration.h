/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSArray;

@protocol CRKIPAddressProviding, CRKIdentity;

@interface CRKHostResourcesConfiguration : NSObject <Swift>

{
    unsigned short _port;
    NSArray *_resourceURLs;
    id <CRKIdentity> _serverIdentity;
    NSArray *_trustedCertificates;
    unsigned long long _maximumAllowedDownloads;
    NSObject<CRKIPAddressProviding> *_IPAddressProvider;
}

@property (copy, nonatomic, readonly) NSArray *resourceURLs;
@property (nonatomic, readonly) id <CRKIdentity> serverIdentity;
@property (copy, nonatomic, readonly) NSArray *trustedCertificates;
@property (nonatomic) unsigned long long maximumAllowedDownloads;
@property (nonatomic) unsigned short port;
@property (retain, nonatomic) NSObject<CRKIPAddressProviding> *IPAddressProvider;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedCertificates:(id)arg3;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;

@end
