/*
 Image: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface HVFRenderer : NSObject

{
    struct unique_ptr<hvf::Renderer, std::__1::default_delete<hvf::Renderer>> renderer;
    NSData *hvfb;
}

@property (retain, nonatomic) NSData *hvfb;

- (id).cxx_construct;
- (id)initWithLoader:(struct HVFLoaderImpl *)arg1;
- (id)initWithTableData:(id)arg1;
- (unsigned int)countParts;
- (_Bool)renderPartAtIndex:(unsigned int)arg1 transform:(id)arg2 toContext:(CDUnknownBlockType)arg3;
- (_Bool)renderPartAtIndex:(unsigned int)arg1 toContext:(CDUnknownBlockType)arg2;

@end
