/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class IKViewElement, NSString, TVMediaInfo, TVObservableEventController, UIView, _TVShelfViewController;

__attribute__((visibility("hidden")))
@interface VUIUpNextBannerViewController : UIViewController

{
    unsigned long long _host;
    IKViewElement *_viewElement;
    _TVShelfViewController *_shelfViewController;
    TVMediaInfo *_selectedMediaInfo;
    TVObservableEventController *_observableEventController;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) _TVShelfViewController *shelfViewController;
@property (retain, nonatomic) TVMediaInfo *selectedMediaInfo;
@property (retain, nonatomic) TVObservableEventController *observableEventController;
@property (nonatomic, readonly) unsigned long long host;
@property (nonatomic, readonly) UIView *visualEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithHost:(unsigned long long)arg1;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)shelfViewController:(id)arg1 didSettleOnItemAtIndexPath:(id)arg2;
- (void)shelfViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)shelfViewController:(id)arg1 didPlayItemAtIndexPath:(id)arg2;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (id)_selectedMediaInfoForEvent:(id)arg1 forElementAtIndex:(long long)arg2;
- (id)_focusedMediaInfoForElementAtIndex:(long long)arg1;
- (void)updateWithElement:(id)arg1;

@end
