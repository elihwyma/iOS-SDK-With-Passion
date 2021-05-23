/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLAsset, NSString;

@interface MDLRelativeAssetResolver : NSObject

{
    MDLAsset *_asset;
}

@property (weak, nonatomic) MDLAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAsset:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (_Bool)canResolveAssetNamed:(id)arg1;

@end
