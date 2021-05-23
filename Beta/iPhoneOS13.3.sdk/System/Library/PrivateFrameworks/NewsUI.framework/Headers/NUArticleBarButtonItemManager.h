/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NUArticleNextButton, UIBarButtonItem, UIViewController;

@protocol NUArticleBarButtonItemManagerDelegate;

@interface NUArticleBarButtonItemManager : NSObject

{
    id <NUArticleBarButtonItemManagerDelegate> _delegate;
    UIViewController *_viewController;
    NUArticleNextButton *_nextButton;
    UIBarButtonItem *_shareBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_nextBarButtonItem;
}

@property (weak, nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) NUArticleNextButton *nextButton;
@property (retain, nonatomic) UIBarButtonItem *shareBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *doneBarButtonItem;
@property (nonatomic, readonly) UIBarButtonItem *nextBarButtonItem;
@property (weak, nonatomic) id <NUArticleBarButtonItemManagerDelegate> delegate;

- (id)initWithViewController:(id)arg1;
- (void)sizeBarButtonItemsForTraitCollection:(id)arg1;
- (void)positionBarButtonItemsForTraitCollection:(id)arg1;
- (void)applyPageStyleToNextBarButtonItem:(id)arg1;
- (void)doNext:(id)arg1;
- (struct CGRect)adjustedFrameForNextArticleButtonForTraitCollection:(id)arg1;
- (struct CGRect)adjustedFrameForDoneBarButtonItemForTraitCollection:(id)arg1;
- (struct CGRect)adjustedFrameForShareBarButtonItemForTraitCollection:(id)arg1;
- (id)createShareBarButtonItem;
- (id)createDoneBarButtonItem;
- (id)createFlexibleSpacerBarButtonItem;
- (void)doShare:(id)arg1;
- (void)doDone:(id)arg1;

@end
