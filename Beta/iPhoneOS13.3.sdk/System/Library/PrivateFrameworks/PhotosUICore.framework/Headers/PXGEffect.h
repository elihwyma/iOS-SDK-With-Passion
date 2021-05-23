/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXGSpriteMetadataStore;

@interface PXGEffect : NSObject

{
    PXGSpriteMetadataStore *_metadataStore;
    unsigned short _effectId;
}

@property (nonatomic) float value1;
@property (nonatomic) float value2;
@property (nonatomic) float value3;
@property (nonatomic) float value4;
@property (nonatomic) float value5;
@property (nonatomic) float value6;
@property (nonatomic) float value7;
@property (nonatomic) float value8;
@property (nonatomic, readonly) unsigned short effectId;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int shaderFlags;

+ (int)type;
+ (id)createEffectForLayout:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithMetadataStore:(id)arg1;

@end
