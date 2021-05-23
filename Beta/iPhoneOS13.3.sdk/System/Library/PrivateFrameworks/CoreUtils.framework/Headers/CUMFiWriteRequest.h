/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CUMFiWriteRequest : NSObject

{
    CUMFiWriteRequest *next;
    NSData *_data;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
