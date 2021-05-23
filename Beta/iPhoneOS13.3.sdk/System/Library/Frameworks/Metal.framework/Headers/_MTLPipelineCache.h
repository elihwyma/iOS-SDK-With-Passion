/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MTLPipelineCache : NSObject

{
    _Bool _writable;
    struct MTLCompilerCache *_compilerCache;
    _Bool _disableRunTimeCompilation;
}

@property (readonly) _Bool writable;
@property (readonly) struct MTLCompilerCache *cache;
@property _Bool disableRunTimeCompilation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)write;
- (id)initWithFilePath:(id)arg1 readOnly:(_Bool)arg2 deviceInfo:(const struct MTLTargetDeviceArch *)arg3;

@end
