/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BSEventQueueEvent : NSObject

{
    NSString *_name;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CDUnknownBlockType handler;

+ (id)eventWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;

- (id)description;
- (void)_execute;
- (void)execute;
- (void)executeFromEventQueue;
- (_Bool)isEqualToEvent:(id)arg1;

@end
