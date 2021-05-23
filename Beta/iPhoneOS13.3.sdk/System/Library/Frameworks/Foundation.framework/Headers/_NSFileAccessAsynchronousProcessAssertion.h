/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface _NSFileAccessAsynchronousProcessAssertion : NSObject

{
    int _pid;
    NSString *_name;
    BKSProcessAssertion *_assertion;
}

@property (readonly) int PID;

- (void)dealloc;
- (void)invalidate;
- (id)initWithPID:(int)arg1 name:(id)arg2;
- (void)beginAssertion;

@end
