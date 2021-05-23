/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class CALayer, NSString, SXDataTableBlueprint, SXDataTableComponentController, SXDataTableDictionary, SXDataTableView, SXScrollView, SXTangierController;

@protocol SXComponentActionHandler, SXComponentController, SXImageViewFactory, SXTextComponentLayoutHosting;

@interface SXDataTableComponentView : SXComponentView

{
    id <SXImageViewFactory> _imageViewFactory;
    id <SXComponentActionHandler> _componentActionHandler;
    id <SXTextComponentLayoutHosting> _textComponentLayoutHosting;
    id <SXComponentController> _componentController;
    SXDataTableView *_tableView;
    SXDataTableComponentController *_dataTableComponentController;
    SXDataTableBlueprint *_blueprint;
    SXDataTableDictionary *_textViews;
    SXDataTableDictionary *_imageViews;
    SXScrollView *_scrollView;
    SXTangierController *_tangierController;
    CALayer *_rightShadow;
    CALayer *_leftShadow;
}

@property (nonatomic, readonly) id <SXImageViewFactory> imageViewFactory;
@property (nonatomic, readonly) id <SXComponentActionHandler> componentActionHandler;
@property (weak, nonatomic, readonly) id <SXTextComponentLayoutHosting> textComponentLayoutHosting;
@property (weak, nonatomic, readonly) id <SXComponentController> componentController;
@property (retain, nonatomic) SXDataTableView *tableView;
@property (retain, nonatomic) SXDataTableComponentController *dataTableComponentController;
@property (retain, nonatomic) SXDataTableBlueprint *blueprint;
@property (retain, nonatomic) SXDataTableDictionary *textViews;
@property (retain, nonatomic) SXDataTableDictionary *imageViews;
@property (retain, nonatomic) SXScrollView *scrollView;
@property (retain, nonatomic) SXTangierController *tangierController;
@property (retain, nonatomic) CALayer *rightShadow;
@property (retain, nonatomic) CALayer *leftShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 imageViewFactory:(id)arg5 componentActionHandler:(id)arg6 textComponentLayoutHosting:(id)arg7 componentController:(id)arg8;
- (void)tangierControllerDidScroll:(id)arg1;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (_Bool)userInteractable;
- (id)contentViewForBehavior:(id)arg1;
- (id)descriptorForIndexPath:(CDStruct_2fea82da)arg1;
- (void)setupShadowsIfNeeded;
- (void)updateTangierController;
- (void)addTextStorageForIndexPath:(CDStruct_2fea82da)arg1 toCollectior:(id)arg2;
- (void)updateShadowOpacity;
- (id)dataTableView:(id)arg1 viewForCellAtIndexPath:(CDStruct_2fea82da)arg2 constraintToSize:(struct CGSize)arg3;

@end
