/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSProtocolChecker.h>

@class NSObject, Protocol;

__attribute__((visibility("hidden")))
@interface NSConcreteProtocolChecker : NSProtocolChecker

{
    NSObject *_target;
    Protocol *_protocol;
}

- (void)dealloc;
- (id)target;
- (id)protocol;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

@end
