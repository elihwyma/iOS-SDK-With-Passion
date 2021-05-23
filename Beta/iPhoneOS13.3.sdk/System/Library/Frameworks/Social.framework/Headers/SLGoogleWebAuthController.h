/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIViewController.h>

@interface SLGoogleWebAuthController : UIViewController

{
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3;
- (id)initWithYouTubeUsername:(id)arg1 accountDescription:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3;

@end
