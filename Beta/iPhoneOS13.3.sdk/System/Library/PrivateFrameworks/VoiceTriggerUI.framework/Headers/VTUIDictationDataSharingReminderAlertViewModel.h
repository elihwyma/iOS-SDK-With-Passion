/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VTUIDictationDataSharingReminderAlertViewModel : NSObject

{
    NSString *_title;
    NSString *_message;
    NSString *_confirmationButtonTitle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *confirmationButtonTitle;

@end
