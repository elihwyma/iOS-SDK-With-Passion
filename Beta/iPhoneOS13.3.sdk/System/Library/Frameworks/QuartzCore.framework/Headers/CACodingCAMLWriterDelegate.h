/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CACodingCAMLWriterDelegate : NSObject

{
    NSString *_resourceDir;
    int _serial;
    NSString *_imageFormat;
    NSDictionary *_imageEncodeOptions;
    _Bool _skipHiddenLayers;
}

@property (copy) NSString *imageFormat;
@property (copy) NSDictionary *imageEncodeOptions;
@property _Bool skipHiddenLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;
- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;
- (_Bool)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2;
- (id)initWithResourceDir:(id)arg1;

@end
