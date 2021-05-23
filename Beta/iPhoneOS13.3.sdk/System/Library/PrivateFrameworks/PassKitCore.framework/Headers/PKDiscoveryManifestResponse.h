/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryWebServiceResponse.h>

@class PKDiscoveryManifest;

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse

{
    PKDiscoveryManifest *_manifest;
}

@property (nonatomic, readonly) PKDiscoveryManifest *manifest;

- (id)initWithData:(id)arg1;
- (id)initWithManifest:(id)arg1;

@end
