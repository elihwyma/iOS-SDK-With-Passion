/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface CUMFiReadRequest : NSObject

{
    unsigned long long minLen;
    unsigned long long maxLen;
    CUMFiReadRequest *next;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;

@end
