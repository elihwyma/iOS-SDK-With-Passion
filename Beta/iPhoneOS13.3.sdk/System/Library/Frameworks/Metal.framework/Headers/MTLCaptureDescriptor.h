/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface MTLCaptureDescriptor : NSObject

{
    id _captureObject;
    long long _destination;
    NSURL *_outputURL;
}

@property (retain, nonatomic) id captureObject;
@property (nonatomic) long long destination;
@property (copy, nonatomic) NSURL *outputURL;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
