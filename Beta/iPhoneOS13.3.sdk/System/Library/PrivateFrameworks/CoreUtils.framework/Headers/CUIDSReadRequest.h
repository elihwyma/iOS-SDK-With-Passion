/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIDSReadRequest : NSObject

{
    unsigned long long minLen;
    unsigned long long maxLen;
    char *buffer;
    unsigned long long len;
    CUIDSReadRequest *next;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;

@end
