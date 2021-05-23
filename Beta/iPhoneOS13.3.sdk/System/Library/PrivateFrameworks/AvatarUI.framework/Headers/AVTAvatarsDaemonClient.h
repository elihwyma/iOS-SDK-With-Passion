/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@protocol AVTUILogger;

@interface AVTAvatarsDaemonClient : NSObject

{
    id <AVTUILogger> _logger;
    CDUnknownBlockType _connectionFactory;
}

@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (copy, nonatomic, readonly) CDUnknownBlockType connectionFactory;

- (void)checkIn;
- (id)initWithLogger:(id)arg1;
- (id)initWithConnectionFactory:(CDUnknownBlockType)arg1 logger:(id)arg2;
- (void)performWorkWithConnection:(CDUnknownBlockType)arg1;
- (void)performWorkWithSynchronousProxy:(CDUnknownBlockType)arg1;

@end
