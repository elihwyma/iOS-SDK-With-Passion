/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLObject.h>

@class NSMutableIndexSet;

@interface NUGLBuffer : NUGLObject

{
    NSMutableIndexSet *_validRegion;
    unsigned int _target;
    unsigned int _usage;
    long long _size;
}

@property (nonatomic, readonly) long long size;
@property (nonatomic) unsigned int target;
@property (nonatomic) unsigned int usage;

- (id)init;
- (id)description;
- (id)initWithSize:(long long)arg1;
- (void)delete;
- (void)generate:(id)arg1;
- (void)invalidateData;
- (void)readDataWithContext:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)readDataInRange:(struct _NSRange)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)writeDataWithContext:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)writeDataInRange:(struct _NSRange)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_writeDataInRange:(struct _NSRange)arg1 options:(unsigned int)arg2 context:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)copyTexture:(id)arg1 inRect:(CDStruct_996ac03c)arg2 context:(id)arg3;
- (void)updateTexture:(id)arg1 inRect:(CDStruct_996ac03c)arg2 context:(id)arg3;
- (_Bool)hasValidData;
- (_Bool)hasValidDataInRange:(struct _NSRange)arg1;
- (_Bool)hasNoValidData;
- (_Bool)hasNoValidDataOutsideOfRange:(struct _NSRange)arg1;
- (void)invalidateDataInRange:(struct _NSRange)arg1;
- (void)validateDataInRange:(struct _NSRange)arg1;

@end
