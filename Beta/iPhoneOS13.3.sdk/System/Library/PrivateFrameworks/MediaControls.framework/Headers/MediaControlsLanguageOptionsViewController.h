/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIViewController.h>

#import <MediaControls/Swift-Protocol.h>

@class MPAVClippingTableView, MPRequestResponseController, MTVisualStylingProvider, NSArray, NSString, UIView;

@protocol MediaControlsLanguageOptionsViewControllerDelegate;

@interface MediaControlsLanguageOptionsViewController : UIViewController <Swift>

{
    NSArray *_languageOptionGroups;
    id <MediaControlsLanguageOptionsViewControllerDelegate> _delegate;
    MPRequestResponseController *_requestResponseController;
    UIView *_materialView;
    MPAVClippingTableView *_tableView;
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (retain, nonatomic) MPRequestResponseController *requestResponseController;
@property (retain, nonatomic) UIView *materialView;
@property (retain, nonatomic) MPAVClippingTableView *tableView;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (retain, nonatomic) NSArray *languageOptionGroups;
@property (weak, nonatomic) id <MediaControlsLanguageOptionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (id)initWithRouteUID:(id)arg1;

@end
