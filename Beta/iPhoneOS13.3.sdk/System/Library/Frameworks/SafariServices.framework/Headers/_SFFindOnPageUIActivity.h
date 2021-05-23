/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivity.h>

@class _SFFindOnPageView;

@interface _SFFindOnPageUIActivity : _SFActivity

{
    _SFFindOnPageView *_findOnPageView;
}

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (id)initWithFindOnPageView:(id)arg1;

@end
