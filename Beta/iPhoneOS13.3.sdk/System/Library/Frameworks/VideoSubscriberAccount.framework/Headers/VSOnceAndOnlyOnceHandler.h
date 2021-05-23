/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSOnceAndOnlyOnceHandler : NSObject

{
    int _counter;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;

- (void)dealloc;
- (void)invoke;

@end
