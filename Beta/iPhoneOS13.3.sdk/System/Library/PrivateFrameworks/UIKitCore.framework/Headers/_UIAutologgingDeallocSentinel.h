/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAutologgingDeallocSentinel : NSObject

{
    _Bool _called;
    NSString *_message;
}

@property (copy, nonatomic) NSString *message;
@property (nonatomic) _Bool called;

- (void)dealloc;

@end
