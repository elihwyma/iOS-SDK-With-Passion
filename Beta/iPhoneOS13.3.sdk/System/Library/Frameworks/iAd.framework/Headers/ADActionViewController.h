/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIViewController.h>

@class ADAdSpace, NSString;

@interface ADActionViewController : UIViewController

{
    _Bool _readyForPresentation;
    ADAdSpace *_adSpace;
}

@property (weak, nonatomic) ADAdSpace *adSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool readyForPresentation;

+ (void)requestActionViewControllerForAdSpace:(id)arg1;
+ (void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1;

- (void)loadView;
- (void)dismiss;
- (void)setReadyForPresentation:(_Bool)arg1;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;
- (void)clientApplicationCancelledAction;
- (void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1;

@end
