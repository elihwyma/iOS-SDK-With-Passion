/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIActivity.h>

@protocol _SFActivityDelegate;

@interface _SFActivity : UIActivity

{
    id <_SFActivityDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFActivityDelegate> delegate;

- (void)activityDidFinish:(_Bool)arg1;

@end
