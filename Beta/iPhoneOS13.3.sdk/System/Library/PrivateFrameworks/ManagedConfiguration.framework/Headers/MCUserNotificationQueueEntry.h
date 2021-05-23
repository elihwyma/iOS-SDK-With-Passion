/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCUserNotificationQueueEntry : NSObject

{
    _Bool _displayOnLockScreen;
    _Bool _dismissOnLock;
    _Bool _displayInAppWhitelistModes;
    NSString *_title;
    NSString *_message;
    NSString *_defaultButtonText;
    NSString *_alternateButtonText;
    NSString *_otherButtonText;
    double _dismissAfterTimeInterval;
    CDUnknownBlockType _completionBlock;
    id _notification;
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *defaultButtonText;
@property (retain, nonatomic) NSString *alternateButtonText;
@property (retain, nonatomic) NSString *otherButtonText;
@property (nonatomic) _Bool displayOnLockScreen;
@property (nonatomic) _Bool dismissOnLock;
@property (nonatomic) _Bool displayInAppWhitelistModes;
@property (nonatomic) double dismissAfterTimeInterval;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (retain, nonatomic) id notification;
@property (retain, nonatomic) NSString *identifier;

@end
