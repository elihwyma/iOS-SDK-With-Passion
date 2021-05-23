/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, SCNNode;

@interface AVTComponentInstance : NSObject

{
    SCNNode *_assetNode;
    NSString *_assetImage;
    NSArray *_assets;
    NSDictionary *_layers;
}

@property (readonly) SCNNode *assetNode;
@property (readonly) NSString *assetImage;
@property (readonly) CDStruct_10883d13 uvRemappingInfo;
@property (readonly) double imageScale;
@property (readonly) struct CGSize imageOffset;
@property (readonly) _Bool imageMirror;

- (void)dealloc;
- (id)initWithComponent:(id)arg1;
- (id)assetImageWithLayerNamed:(id)arg1;
- (void)_commonInitForCaching:(_Bool)arg1 component:(id)arg2;
- (id)initWithComponent:(id)arg1 forCaching:(_Bool)arg2;
- (void)updateMaterialsWithComponent:(id)arg1;
- (_Bool)has2DAsset;
- (_Bool)has3DAsset;
- (id)assetImageForAsset:(id)arg1;

@end
