/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UINavigationController.h>

@class MCDPCContainer, MCDPCModel, NSArray, NSOperationQueue, NSString;

@interface MCDPlayableContentViewController : UINavigationController

{
    MCDPCModel *_model;
    MCDPCContainer *_rootContainer;
    NSArray *_stackToRebuild;
    _Bool _hasBrowsableContent;
    _Bool _hasSectionedContent;
    _Bool _hasLoaded;
    NSString *_bundleID;
    NSOperationQueue *_modelInvalidationQueue;
}

@property (retain, nonatomic) NSOperationQueue *modelInvalidationQueue;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)initWithBundleID:(id)arg1;
- (void)_setupView;
- (void)_modelDidInvalidate:(id)arg1;
- (void)_nowPlayingIdentifiersChanged:(id)arg1;
- (id)initWithBundleID:(id)arg1 stack:(id)arg2;
- (void)_populateStack;
- (id)_createSectionedRootViewController;
- (id)_createRootViewController;
- (void)refreshNavigationStackForLaunch;
- (id)currentStack;

@end
