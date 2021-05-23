/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIViewController.h>

@class NSString, NUCanvas, NUViewNode;

@protocol NULoadingDelegate, NURouter;

@interface NUWelcomeToNewsViewController : UIViewController

{
    id <NULoadingDelegate> _loadingDelegate;
    NUCanvas *_canvas;
    NUViewNode *_appIconImageViewNode;
    NUViewNode *_titleLabelNode;
    NUViewNode *_descriptionLabelNode;
    NUViewNode *_readMoreButtonNode;
    id <NURouter> _router;
}

@property (retain, nonatomic) NUCanvas *canvas;
@property (nonatomic, readonly) NUViewNode *appIconImageViewNode;
@property (nonatomic, readonly) NUViewNode *titleLabelNode;
@property (nonatomic, readonly) NUViewNode *descriptionLabelNode;
@property (nonatomic, readonly) NUViewNode *readMoreButtonNode;
@property (nonatomic, readonly) id <NURouter> router;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NULoadingDelegate> loadingDelegate;
@property (copy, nonatomic, readonly) NSString *pageIdentifier;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)buildCanvas;
- (void)doReadMoreNews:(id)arg1;
- (id)initWithRouter:(id)arg1;

@end
