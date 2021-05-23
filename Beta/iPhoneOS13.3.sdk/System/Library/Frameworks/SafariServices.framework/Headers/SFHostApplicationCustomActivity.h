/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivity.h>

@class SFCustomActivityProxy;

__attribute__((visibility("hidden")))
@interface SFHostApplicationCustomActivity : _SFActivity

{
    SFCustomActivityProxy *_activityProxy;
}

@property (nonatomic, readonly) SFCustomActivityProxy *activityProxy;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)initWithActivityProxy:(id)arg1;

@end
