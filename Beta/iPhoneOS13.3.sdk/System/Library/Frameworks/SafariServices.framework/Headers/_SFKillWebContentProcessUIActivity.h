/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivity.h>

@protocol _SFKillWebContentProcessUIActivityDelegate;

@interface _SFKillWebContentProcessUIActivity : _SFActivity

{
    id <_SFKillWebContentProcessUIActivityDelegate> _webProcessDelegate;
}

@property (weak, nonatomic) id <_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end
