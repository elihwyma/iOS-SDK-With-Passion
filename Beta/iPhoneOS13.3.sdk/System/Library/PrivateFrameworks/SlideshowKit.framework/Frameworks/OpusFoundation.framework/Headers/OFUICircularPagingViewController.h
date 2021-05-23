/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <OpusFoundation/OFUIViewController.h>

@class NSString, OFUICircularPagingView;

@interface OFUICircularPagingViewController : OFUIViewController

{
    OFUICircularPagingView *_circularPagingView;
}

@property (retain, nonatomic) OFUICircularPagingView *circularPagingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)circularPagingViewClass;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillUnload;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)circularPagingViewDidMoveForward:(id)arg1;
- (void)circularPagingViewDidMoveBackward:(id)arg1;

@end
