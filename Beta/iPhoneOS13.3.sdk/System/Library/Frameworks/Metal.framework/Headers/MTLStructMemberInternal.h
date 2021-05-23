/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLStructMember.h>

@class MTLType, NSString;

__attribute__((visibility("hidden")))
@interface MTLStructMemberInternal : MTLStructMember

{
    NSString *_name;
    unsigned long long _offset;
    unsigned int _dataType:16;
    id _details;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
    unsigned long long _argumentIndex;
    unsigned long long _render_target;
    unsigned long long _raster_order_group;
    MTLType *_typeInfo;
}

@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (readonly) unsigned long long render_target;
@property (readonly) unsigned long long raster_order_group;

- (void)dealloc;
- (id)name;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)dataType;
- (id)dataTypeDescription;
- (unsigned long long)offset;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)structType;
- (id)arrayType;
- (unsigned long long)indirectArgumentIndex;
- (id)indirectArgumentType;
- (id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 indirectArgumentIndex:(unsigned long long)arg6 render_target:(unsigned long long)arg7 raster_order_group:(unsigned long long)arg8 details:(id)arg9;
- (unsigned long long)argumentIndex;
- (_Bool)isMemberLayoutThreadSafeWith:(id)arg1;
- (id)textureReferenceType;
- (id)pointerType;

@end
