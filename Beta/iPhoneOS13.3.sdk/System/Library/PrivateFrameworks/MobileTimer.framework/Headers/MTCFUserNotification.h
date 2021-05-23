/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTOSTransaction, NSString;

@interface MTCFUserNotification : NSObject

{
    NSString *_identifier;
    CDUnknownBlockType _handler;
    MTOSTransaction *_transaction;
    struct __CFUserNotification *_notification;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) MTOSTransaction *transaction;
@property (nonatomic) struct __CFUserNotification *notification;

@end
