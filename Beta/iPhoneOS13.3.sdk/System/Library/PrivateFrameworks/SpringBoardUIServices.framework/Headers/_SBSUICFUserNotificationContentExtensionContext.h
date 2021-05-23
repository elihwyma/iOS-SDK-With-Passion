/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSExtensionContext.h>

@protocol _SBSUICFUserNotificationContentExtensionHostInterface;

@interface _SBSUICFUserNotificationContentExtensionContext : NSExtensionContext

{
    id <_SBSUICFUserNotificationContentExtensionHostInterface> _hostService;
}

@property (weak, nonatomic) id <_SBSUICFUserNotificationContentExtensionHostInterface> hostService;

@end
