/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@interface ETDataPointDictionary : NSObject

{
    map_b74cfcc1 _image_buffers;
    map_afad69f8 _float_buffers;
}

@property map_b74cfcc1 image_buffers;
@property map_afad69f8 float_buffers;

- (id)initWithDictionary:(id)arg1;
- (id).cxx_construct;
- (_Bool)setImage:(struct vImage_Buffer)arg1 forKey:(id)arg2;
- (float *)dataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setData:(float *)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(_Bool)arg4;
- (id)dataArrayForKey:(id)arg1 error:(id *)arg2;

@end
