/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

__attribute__((visibility("hidden")))
@interface MTLImageBlockArgument : MTLArgumentInternal

{
    unsigned long long _kind;
    unsigned int _dataSize;
    MTLStructTypeInternal *_masterStructMembers;
    _Bool _aliasImplicitImageBlock;
    unsigned int _aliasImplicitImageBlockRenderTarget;
}

- (void)dealloc;
- (void)setStructType:(id)arg1;
- (unsigned long long)imageBlockDataSize;
- (id)imageBlockMasterStructMembers;
- (_Bool)aliasImplicitImageBlock;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 index:(unsigned long long)arg5 kind:(unsigned long long)arg6 dataSize:(unsigned int)arg7 masterStructMembers:(id)arg8 aliasImplicitImageBlock:(_Bool)arg9 aliasImplicitImageBlockRenderTarget:(unsigned int)arg10;
- (unsigned long long)imageBlockKind;

@end
