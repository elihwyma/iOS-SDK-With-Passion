/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface XPCTransaction : NSObject

{
    _Bool _tranactionCreated;
    NSString *_reason;
}

@property _Bool tranactionCreated;
@property (retain) NSString *reason;

- (id)init;
- (void)dealloc;
- (id)initWithReason:(id)arg1;

@end
