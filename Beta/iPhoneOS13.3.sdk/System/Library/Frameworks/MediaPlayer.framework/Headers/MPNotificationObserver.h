/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPNotificationObserver : NSObject

{
    NSString *_name;
    id _object;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (weak, nonatomic, readonly) id object;
@property (copy, nonatomic, readonly) CDUnknownBlockType handler;

- (void)dealloc;
- (void)_handleNotification:(id)arg1;
- (id)initWithName:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
