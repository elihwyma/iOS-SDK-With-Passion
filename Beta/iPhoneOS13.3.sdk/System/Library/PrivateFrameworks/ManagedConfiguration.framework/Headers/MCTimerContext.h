/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCTimerContext : NSObject

{
    _Bool _enabled;
}

@property (nonatomic) _Bool enabled;

- (id)init;
- (void)disable;

@end
