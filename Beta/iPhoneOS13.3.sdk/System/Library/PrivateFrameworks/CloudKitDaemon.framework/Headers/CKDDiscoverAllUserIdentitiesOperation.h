/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDiscoverUserIdentitiesOperation.h>

@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation

{
    NSMutableDictionary *_contactIdentifiersByLookupInfo;
}

@property (retain, nonatomic) NSMutableDictionary *contactIdentifiersByLookupInfo;

- (void)main;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (void)_discoverIdentitiesBatched:(id)arg1;

@end
