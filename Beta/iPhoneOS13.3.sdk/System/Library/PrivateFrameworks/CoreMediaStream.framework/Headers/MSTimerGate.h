/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@interface MSTimerGate : NSObject

{
    _Bool _enabled;
}

@property (nonatomic) _Bool enabled;

- (id)init;
- (void)disable;
- (void)enable;

@end
