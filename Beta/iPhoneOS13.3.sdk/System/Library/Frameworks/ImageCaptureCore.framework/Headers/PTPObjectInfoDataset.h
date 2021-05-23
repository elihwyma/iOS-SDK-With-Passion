/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface PTPObjectInfoDataset : NSObject

{
    unsigned int _storageID;
    unsigned short _objectFormat;
    unsigned short _protectionStatus;
    unsigned long long _objectCompressedSize;
    unsigned short _thumbFormat;
    unsigned int _thumbCompressedSize;
    unsigned int _thumbOffset;
    unsigned int _thumbPixWidth;
    unsigned int _thumbPixHeight;
    unsigned int _imagePixWidth;
    unsigned int _imagePixHeight;
    unsigned int _imageBitDepth;
    unsigned int _parentObject;
    unsigned short _associationType;
    unsigned int _associationDesc;
    unsigned int _sequenceNumber;
    NSString *_filename;
    NSString *_captureDate;
    NSString *_modificationDate;
    NSMutableString *_keywords;
    unsigned int _thmFileSize;
    unsigned int _objectHandle;
    NSUUID *_relatedUUID;
    long long _intervalSince1970;
}

- (id)initWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)keywords;
- (void)setKeywords:(id)arg1;
- (id)filename;
- (void)setFilename:(id)arg1;
- (id)modificationDate;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned int)sequenceNumber;
- (id)content;
- (void)setModificationDate:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(int)arg2;
- (void)setParentObject:(unsigned int)arg1;
- (unsigned short)objectFormat;
- (void)setObjectFormat:(unsigned short)arg1;
- (unsigned short)protectionStatus;
- (void)setProtectionStatus:(unsigned short)arg1;
- (unsigned int)objectCompressedSize;
- (void)setObjectCompressedSize:(unsigned long long)arg1;
- (unsigned short)thumbFormat;
- (void)setThumbFormat:(unsigned short)arg1;
- (unsigned int)thumbCompressedSize;
- (void)setThumbCompressedSize:(unsigned int)arg1;
- (unsigned int)thumbOffset;
- (void)setThumbOffset:(unsigned int)arg1;
- (unsigned int)thumbPixWidth;
- (void)setThumbPixWidth:(unsigned int)arg1;
- (unsigned int)thumbPixHeight;
- (void)setThumbPixHeight:(unsigned int)arg1;
- (unsigned int)imagePixWidth;
- (void)setImagePixWidth:(unsigned int)arg1;
- (unsigned int)imagePixHeight;
- (void)setImagePixHeight:(unsigned int)arg1;
- (unsigned int)imageBitDepth;
- (void)setImageBitDepth:(unsigned int)arg1;
- (unsigned int)parentObject;
- (unsigned short)associationType;
- (void)setAssociationType:(unsigned short)arg1;
- (unsigned int)objectHandle;
- (void)setObjectHandle:(unsigned int)arg1;
- (id)initWithBytes:(char *)arg1 length:(unsigned int)arg2 contentType:(int)arg3;
- (_Bool)contentLengthValid:(unsigned int)arg1 forContentType:(int)arg2;
- (void)contentLength:(unsigned int *)arg1 bufferLength:(unsigned int *)arg2 contentType:(int)arg3;
- (id)content:(int)arg1;
- (unsigned int)storageID;
- (void)setStorageID:(unsigned int)arg1;
- (unsigned long long)objectCompressedSize64;
- (unsigned int)thmFileSize;
- (void)setThmFileSize:(unsigned int)arg1;
- (unsigned int)associationDesc;
- (void)setAssociationDesc:(unsigned int)arg1;
- (id)captureDate;
- (void)setCaptureDate:(id)arg1;
- (void)addCustomKeyword:(id)arg1 withIdentifier:(id)arg2;
- (unsigned int)objectContentSizeForContentType:(int)arg1;
- (unsigned int)objectBufferSizeForContentType:(int)arg1;
- (id)relatedUUID;
- (long long)intervalSince1970;

@end
