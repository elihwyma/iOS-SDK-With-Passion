/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MSObjectInfoDataset : NSObject

{
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
    unsigned int _objectHandle;
    unsigned short _imageOrientation;
    unsigned long long _captureDate_tvsec;
    unsigned long long _modificationDate_tvsec;
    NSString *_filename;
}

- (id)initWithBytes:(char *)arg1 length:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)filename;
- (void)setFilename:(id)arg1;
- (id)content;
- (void)setParentObject:(unsigned int)arg1;
- (void)contentLength:(unsigned int *)arg1 bufferLength:(unsigned int *)arg2;
- (unsigned short)objectFormat;
- (void)setObjectFormat:(unsigned short)arg1;
- (unsigned short)protectionStatus;
- (void)setProtectionStatus:(unsigned short)arg1;
- (unsigned long long)objectCompressedSize;
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
- (unsigned long long)captureDate_tvsec;
- (void)setCaptureDate_tvsec:(unsigned long long)arg1;
- (void)setImageOrietation:(unsigned short)arg1;
- (unsigned short)imageOrietation;
- (unsigned long long)modificationDate_tvsec;
- (void)setModificationDate_tvsec:(unsigned long long)arg1;
- (unsigned int)objectHandle;
- (void)setObjectHandle:(unsigned int)arg1;

@end
