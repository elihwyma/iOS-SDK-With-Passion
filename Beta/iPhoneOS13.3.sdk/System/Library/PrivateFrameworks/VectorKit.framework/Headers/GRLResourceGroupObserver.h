/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GRLResourceGroupObserver : NSObject

{
    struct GeoResourceProvider *_resourceProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)initWithResourceProvider:(struct GeoResourceProvider *)arg1;

@end
