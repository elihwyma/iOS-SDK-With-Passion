/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface WFWidgetExplanationSettings : NSObject

{
    NSString *_campaignIdentifier;
    NSURL *_videoURL;
    NSString *_navigationBarText;
    NSString *_sloganText;
    NSString *_detailText;
    NSString *_buttonText;
    NSString *_completedSloganText;
    NSString *_completedDetailText;
    NSString *_completedButtonText;
}

@property (copy, nonatomic) NSString *campaignIdentifier;
@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *navigationBarText;
@property (copy, nonatomic) NSString *sloganText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *completedSloganText;
@property (copy, nonatomic) NSString *completedDetailText;
@property (copy, nonatomic) NSString *completedButtonText;

+ (id)defaultSettings;

@end
