/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject

{
    struct atomic_flag _cancelFlag;
    _Bool _cancelRequested;
    PHImageDecoder *_initialDecoder;
    unsigned long long _figRequestID;
    struct FigPhotoDecompressionContainer *_figDecompressionContainer;
}

@property (nonatomic, readonly) _Bool cancelRequested;
@property (nonatomic, readonly) PHImageDecoder *initialDecoder;
@property (nonatomic) unsigned long long figRequestID;
@property (retain, nonatomic) struct FigPhotoDecompressionContainer *figDecompressionContainer;

- (void)dealloc;
- (void)cancel;
- (id)initWithFigRequestID:(unsigned long long)arg1 container:(struct FigPhotoDecompressionContainer *)arg2 figDecoder:(id)arg3;
- (id)initWithImageIODecoder:(id)arg1;

@end
