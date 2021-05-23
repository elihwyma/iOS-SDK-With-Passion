/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class NSArray, NSData, NSString;

@interface HMICameraVideoFrame : HMFObject

{
    unsigned long long _frameId;
    unsigned long long _fragmentSequenceNumber;
    struct __CVBuffer *_pixelBuffer;
    NSData *_jpegData;
    NSArray *_motionDetections;
    struct CGSize _size;
    CDStruct_1b6d18a9 _presentationTime;
}

@property (readonly) struct __CVBuffer *pixelBuffer;
@property (readonly) NSData *jpegData;
@property (retain) NSArray *motionDetections;
@property (readonly) CDStruct_1b6d18a9 presentationTime;
@property (readonly) struct CGSize size;
@property (readonly) unsigned long long frameId;
@property (readonly) unsigned long long fragmentSequenceNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)JPEGRepresentationWithDownscaleFactor:(float)arg1 outSize:(struct CGSize *)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 frameId:(unsigned long long)arg3 fragmentSequenceNumber:(unsigned long long)arg4;
- (id)initWithJPEGData:(id)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 frameId:(unsigned long long)arg3 fragmentSequenceNumber:(unsigned long long)arg4 size:(struct CGSize)arg5;
- (_Bool)convertToJPEGWithError:(id *)arg1;

@end
