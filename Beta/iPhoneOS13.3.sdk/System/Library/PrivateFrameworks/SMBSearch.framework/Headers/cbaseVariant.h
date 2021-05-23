/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSNumber, utf16leData, vtSafeArray, vtVector;

@interface cbaseVariant : NSObject

{
    unsigned char _vData1;
    unsigned char _vData2;
    unsigned short _vType;
    NSNumber *_scalarValue;
    utf16leData *_strData;
    vtVector *_vectObj;
    vtSafeArray *_arrObj;
}

@property (readonly) unsigned short vType;
@property (readonly) unsigned char vData1;
@property (readonly) unsigned char vData2;
@property (retain, readonly) NSNumber *scalarValue;
@property (retain, readonly) utf16leData *strData;
@property (retain) vtVector *vectObj;
@property (retain) vtSafeArray *arrObj;

- (id)init;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (int)setStringType:(unsigned short)arg1 UTF8Str:(id)arg2;
- (int)setScalarType:(unsigned short)arg1 ScalarValue:(id)arg2;
- (int)setVectorWithType:(unsigned short)arg1 ValueArray:(id)arg2;
- (int)setArrayWithType:(unsigned short)arg1 ValueArray:(id)arg2;
- (int)setStrVectorType:(unsigned short)arg1 ValueArray:(id)arg2;
- (int)setIntVectorType:(unsigned int)arg1 ValueArray:(id)arg2;
- (int)setStrArrayType:(unsigned short)arg1 ValueArray:(id)arg2;
- (int)setIntArrayType:(unsigned int)arg1 ValueArray:(id)arg2;
- (int)encodeArray:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (int)encodeVector:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (int)encodeStrArray:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (int)encodeIntArray:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (int)encodeStrVector:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (int)encodeIntVector:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;

@end
