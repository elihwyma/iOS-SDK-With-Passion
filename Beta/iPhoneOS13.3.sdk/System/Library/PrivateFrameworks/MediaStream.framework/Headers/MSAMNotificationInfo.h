/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject

{
    MSAlertManager *_owner;
    NSString *_personID;
    struct __CFUserNotification *_userNotification;
    struct __CFRunLoopSource *_runLoopSource;
    CDUnknownBlockType _completionBlock;
}

@property (weak, nonatomic) MSAlertManager *owner;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic) struct __CFRunLoopSource *runLoopSource;
@property (nonatomic) struct __CFUserNotification *userNotification;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

+ (id)info;

- (void)dealloc;

@end
