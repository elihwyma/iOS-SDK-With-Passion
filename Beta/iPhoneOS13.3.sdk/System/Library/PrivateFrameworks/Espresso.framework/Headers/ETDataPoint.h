/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@interface ETDataPoint : NSObject

{
    map_b74cfcc1 image_buffers;
    struct map<std::__1::basic_string<char>, ETDataPoint_buffer, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, ETDataPoint_buffer>>> buffers;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)setImage:(struct vImage_Buffer)arg1 forKey:(id)arg2;
- (void)iterateBuffersByKey:(CDUnknownBlockType)arg1;
- (void)setData:(float *)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(_Bool)arg4;
- (struct vImage_Buffer)imageWithKey:(id)arg1;
- (float *)bufferWithKey:(id)arg1;
- (map_8a5bf7af)getSampleData;

@end
