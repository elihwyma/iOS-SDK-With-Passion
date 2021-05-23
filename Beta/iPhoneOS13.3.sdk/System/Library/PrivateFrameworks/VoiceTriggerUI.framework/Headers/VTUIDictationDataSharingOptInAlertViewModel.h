/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VTUIDictationDataSharingOptInAlertViewModel : NSObject

{
    NSString *_title;
    NSString *_message;
    NSString *_optInButtonTitle;
    NSString *_learnMoreButtonTitle;
    NSString *_optOutButtonTitle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *optInButtonTitle;
@property (copy, nonatomic) NSString *learnMoreButtonTitle;
@property (copy, nonatomic) NSString *optOutButtonTitle;

@end
