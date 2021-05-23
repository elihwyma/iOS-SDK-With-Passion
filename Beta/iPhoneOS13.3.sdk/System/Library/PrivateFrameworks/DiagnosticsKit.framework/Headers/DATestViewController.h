/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <UIKit/UIViewController.h>

@class CXCallObserver, DATestViewOperation, NSDictionary, NSMutableArray, NSString, UITapGestureRecognizer;

@interface DATestViewController : UIViewController

{
    _Bool _fullScreen;
    DATestViewOperation *_currentTest;
    NSMutableArray *_allResults;
    NSDictionary *_dataObject;
    UITapGestureRecognizer *_homeButtonRecognizer;
    CXCallObserver *_callObserver;
}

@property (retain, nonatomic) NSMutableArray *allResults;
@property (retain, nonatomic) NSDictionary *dataObject;
@property (nonatomic, getter=isFullScreen) _Bool fullScreen;
@property (retain, nonatomic) UITapGestureRecognizer *homeButtonRecognizer;
@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) DATestViewOperation *currentTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)initWithTest:(id)arg1;
- (id)initWithTest:(id)arg1 fullScreen:(_Bool)arg2;
- (void)monitorIncomingCall;
- (void)cancelTest;

@end
