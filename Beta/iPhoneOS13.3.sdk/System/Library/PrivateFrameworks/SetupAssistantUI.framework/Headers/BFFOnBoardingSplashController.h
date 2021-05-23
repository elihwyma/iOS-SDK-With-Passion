/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <SetupAssistantUI/BFFSplashController.h>

@class NSDate, NSString;

@protocol BYDeviceProvider;

@interface BFFOnBoardingSplashController : BFFSplashController

{
    _Bool _extendBackgroundColorToNavigationBar;
    _Bool _movieShowing;
    long long _feature;
    CDUnknownBlockType _completion;
    id <BYDeviceProvider> _deviceProvider;
    NSString *_preferenceKey;
    NSDate *_placeholderStartDate;
    double _placeholderDuration;
    NSDate *_videoStartDate;
}

@property (retain) NSString *preferenceKey;
@property (nonatomic) long long feature;
@property _Bool extendBackgroundColorToNavigationBar;
@property (retain) NSDate *placeholderStartDate;
@property _Bool movieShowing;
@property double placeholderDuration;
@property (retain) NSDate *videoStartDate;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) id <BYDeviceProvider> deviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cloudConfigSkipKey;
+ (void)needsToRunForFeature:(long long)arg1 usingDeviceProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithFeature:(long long)arg1;
- (void)movieReady:(id)arg1 error:(id)arg2;
- (id)movieView;

@end
