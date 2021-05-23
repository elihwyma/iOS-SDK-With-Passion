/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@class PHMediaFormatConversionRequest;

@interface PHMediaFormatConversionJob : NSObject

{
    PHMediaFormatConversionRequest *_conversionRequest;
    CDUnknownBlockType _completionHandler;
}

@property (retain) PHMediaFormatConversionRequest *conversionRequest;
@property (copy) CDUnknownBlockType completionHandler;

- (id)description;

@end
