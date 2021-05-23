/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, VideoScaler;

__attribute__((visibility("hidden")))
@interface CannedRawVideoCapture : NSObject

{
    int _width;
    int _height;
    NSArray *_allResolutions;
    int _allFrameCount;
    double _allFrameRate;
    NSDictionary *_currentResolution;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_currentInputFile;
    struct __CVPixelBufferPool *_currentPixelBufferPool;
    struct __CVPixelBufferPool *_rotatedPixelBufferPool;
    VideoScaler *_videoScaler;
    struct _opaque_pthread_mutex_t _inputMutex;
    struct _opaque_pthread_mutex_t _attributeMutex;
}

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) NSArray *allResolutions;
@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (retain, nonatomic) NSDictionary *currentResolution;
@property (retain, nonatomic) VideoScaler *videoScaler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg1;
- (void)getFrameRate:(double *)arg1 frameCount:(int *)arg2;
- (int)setWidth:(int)arg1 height:(int)arg2;
- (int)rotatePixelBuffer:(struct __CVBuffer *)arg1 andStoreTo:(struct __CVBuffer **)arg2;
- (int)initializeFrameResolutionArrayFromFolder:(id)arg1;

@end
