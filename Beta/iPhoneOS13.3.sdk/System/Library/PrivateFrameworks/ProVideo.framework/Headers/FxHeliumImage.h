/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/FxImage.h>

@interface FxHeliumImage : FxImage

{
    struct FxHeliumImagePriv *_heliumImagePriv;
}

- (void)dealloc;
- (id)initWithInfo:(CDStruct_da8610d8)arg1;
- (unsigned long long)imageType;
- (HGRef_265f9e4c)heliumRef;
- (void)setHeliumRef:(const HGRef_265f9e4c *)arg1;
- (struct HGNode *)heliumNode;
- (id)initWithInfo:(CDStruct_da8610d8)arg1 andHeliumRef:(const HGRef_265f9e4c *)arg2;
- (id)initWithInfo:(CDStruct_da8610d8)arg1 andHeliumNode:(struct HGNode *)arg2;
- (void)setHeliumNode:(struct HGNode *)arg1;

@end
