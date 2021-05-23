/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class EspressoContext;

@interface EspressoNetwork : NSObject

{
    shared_ptr_d082c67d _net;
}

@property (readonly) shared_ptr_d082c67d net;
@property (readonly) unsigned long long layers_size;
@property (readonly) EspressoContext *ctx;

- (id).cxx_construct;
- (void)wipe_layers_blobs;
- (id)initWithJSFile:(const char *)arg1 context:(id)arg2 computePath:(int)arg3;
- (id)initWithJSFile:(const char *)arg1 binSerializerId:(const char *)arg2 context:(id)arg3 computePath:(int)arg4;

@end
