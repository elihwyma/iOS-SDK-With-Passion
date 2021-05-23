/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CUMessageRequestEntry : NSObject

{
    CDUnknownBlockType _handler;
    NSDictionary *_options;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) NSDictionary *options;

@end
