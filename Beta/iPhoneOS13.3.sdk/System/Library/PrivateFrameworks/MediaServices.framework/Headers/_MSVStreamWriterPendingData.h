/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _MSVStreamWriterPendingData : NSObject

{
    NSData *_data;
    CDUnknownBlockType _completionHandler;
    long long _bytesWritten;
}

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) long long bytesWritten;

@end
