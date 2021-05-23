/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSFileHandle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject

{
    NSFileHandle *_recFileHandle;
    struct _mxnetTools_recordHeader_t_ _recordHeader;
    unsigned long long _currentOffset;
    NSMutableArray *_labelsPrivate;
    struct _mxnetTools_imageHeader_t_ _imageHeader;
}

@property (retain) NSFileHandle *recFileHandle;
@property struct _mxnetTools_recordHeader_t_ recordHeader;
@property struct _mxnetTools_imageHeader_t_ imageHeader;
@property unsigned long long currentOffset;
@property (retain) NSMutableArray *labelsPrivate;

- (id)labels;
- (id)imageData;
- (struct _mxnetTools_imageID_t_)imageID;
- (id)initWithRecFile:(id)arg1 error:(id *)arg2;
- (_Bool)seekRecordWithID:(struct _mxnetTools_imageID_t_ *)arg1 error:(id *)arg2;
- (_Bool)nextRecordAndError:(id *)arg1;

@end
