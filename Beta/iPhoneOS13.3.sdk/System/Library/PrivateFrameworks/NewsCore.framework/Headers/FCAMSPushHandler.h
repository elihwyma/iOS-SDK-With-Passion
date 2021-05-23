/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFLazy;

@interface FCAMSPushHandler : NSObject

{
    NFLazy *_lazyHandler;
}

@property (retain, nonatomic) NFLazy *lazyHandler;

- (id)init;
- (void)handleNotification:(id)arg1;
- (_Bool)shouldHandleNotification:(id)arg1;
- (_Bool)shouldHandleNotificationResponse:(id)arg1;
- (void)handleNotificationResponse:(id)arg1;

@end
