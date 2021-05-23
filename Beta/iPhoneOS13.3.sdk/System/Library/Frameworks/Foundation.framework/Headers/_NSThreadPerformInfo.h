/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSThreadPerformInfo : NSObject

{
    id target;
    SEL selector;
    id argument;
    NSMutableArray *modes;
    NSCondition *waiter;
    char *signalled;
}

- (void)dealloc;

@end
