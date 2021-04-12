//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;
@protocol CRKIPAddressProviding, CRKIdentity;

@interface CRKHostResourcesConfiguration : NSObject <NSCopying>
{
    unsigned short _port;
    NSArray *_resourceURLs;
    id <CRKIdentity> _serverIdentity;
    NSArray *_trustedCertificates;
    NSUInteger _maximumAllowedDownloads;
    NSObject<CRKIPAddressProviding> *_IPAddressProvider;
}

@property(retain, nonatomic) NSObject<CRKIPAddressProviding> *IPAddressProvider; // @synthesize IPAddressProvider=_IPAddressProvider;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(nonatomic) NSUInteger maximumAllowedDownloads; // @synthesize maximumAllowedDownloads=_maximumAllowedDownloads;
@property(readonly, copy, nonatomic) NSArray *trustedCertificates; // @synthesize trustedCertificates=_trustedCertificates;
@property(readonly, nonatomic) id <CRKIdentity> serverIdentity; // @synthesize serverIdentity=_serverIdentity;
@property(readonly, copy, nonatomic) NSArray *resourceURLs; // @synthesize resourceURLs=_resourceURLs;
// - (void).cxx_destruct;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedCertificates:(id)arg3;

@end

