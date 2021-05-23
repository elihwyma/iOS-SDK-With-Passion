/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIViewController.h>

@interface OFUIViewController : UIViewController

+ (Class)viewClass;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;

@end
