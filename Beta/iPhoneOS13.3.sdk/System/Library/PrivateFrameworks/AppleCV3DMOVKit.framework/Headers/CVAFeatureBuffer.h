/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CVAFeatureBuffer : NSObject

{
    unsigned int _width;
    unsigned int _height;
    unsigned int _bytesPerRow;
    double _timestamp;
    NSData *_data;
    NSString *_sourceStreamID;
}

@property double timestamp;
@property unsigned int width;
@property unsigned int height;
@property unsigned int bytesPerRow;
@property (retain) NSData *data;
@property (retain) NSString *sourceStreamID;

+ (_Bool)supportsSecureCoding;
+ (id)classes;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelBufferRef:(struct __CVBuffer *)arg1 timestamp:(double)arg2 streamID:(id)arg3;
- (struct __CVBuffer *)getPixelBuffer;

@end
