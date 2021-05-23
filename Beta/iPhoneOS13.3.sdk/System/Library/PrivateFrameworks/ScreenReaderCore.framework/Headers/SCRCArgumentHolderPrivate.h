/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SCRCArgumentHolderPrivate : NSObject

{
    NSNumber *option;
    NSString *argument;
    id target;
    SEL action;
    NSString *argumentDescription;
    _Bool isRequired;
}

@end
