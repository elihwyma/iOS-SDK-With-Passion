/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CompandedRawBayerPostProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg1 metadata:(id)arg2 reader:(id)arg3 error:(id *)arg4;

@end
