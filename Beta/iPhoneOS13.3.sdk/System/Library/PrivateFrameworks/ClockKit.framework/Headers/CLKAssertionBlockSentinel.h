/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLKAssertionBlockSentinel : NSObject

{
    _Bool _called;
    _Bool _fatal;
    NSString *_message;
    CDUnknownBlockType _fallbackBlock;
}

@property (copy, nonatomic) NSString *message;
@property (getter=isCalled) _Bool called;
@property (nonatomic, getter=shouldBeFatal) _Bool fatal;
@property (copy, nonatomic) CDUnknownBlockType fallbackBlock;

- (void)dealloc;
- (void)markCalled;

@end
