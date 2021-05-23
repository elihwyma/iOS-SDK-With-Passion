/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIAlertController;

@interface MSRadarInteraction : NSObject

{
    NSURL *_radarURL;
    NSString *_title;
    NSString *_message;
    NSString *_openButtonTitle;
    CDUnknownBlockType _openHandler;
    NSString *_cancelButtonTitle;
    CDUnknownBlockType _cancelHandler;
    NSString *_maybeLaterButtonTitle;
    CDUnknownBlockType _maybeLaterHandler;
}

@property (nonatomic, readonly) NSURL *radarURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (copy, nonatomic) NSString *openButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType openHandler;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType cancelHandler;
@property (copy, nonatomic) NSString *maybeLaterButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType maybeLaterHandler;
@property (nonatomic, readonly) UIAlertController *interactionViewController;

+ (id)interactionWithTitle:(id)arg1 message:(id)arg2 radarURL:(id)arg3;
+ (id)interactionWithTitle:(id)arg1 message:(id)arg2 builder:(CDUnknownBlockType)arg3;

- (id)initWithTitle:(id)arg1 message:(id)arg2 radarURL:(id)arg3;

@end
