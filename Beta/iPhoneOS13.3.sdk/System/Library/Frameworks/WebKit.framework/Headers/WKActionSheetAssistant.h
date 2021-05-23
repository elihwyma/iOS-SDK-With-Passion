/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol WKActionSheetAssistantDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheetAssistant : NSObject

{
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> _delegate;
    struct RetainPtr<WKActionSheet> _interactionSheet;
    RetainPtr_5a40b48a _elementInfo;
    Optional_d40c49cf _positionInformation;
    struct WeakObjCPtr<UIView> _view;
    _Bool _needsLinkIndicator;
    _Bool _isPresentingDDUserInterface;
    _Bool _hasPendingActionSheet;
}

@property (weak, nonatomic) id <WKActionSheetAssistantDelegate> delegate;
@property (nonatomic) _Bool needsLinkIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithView:(id)arg1;
- (_Bool)presentSheet;
- (id)superviewForSheet;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (struct CGRect)presentationRectForIndicatedElement;
- (struct CGRect)presentationRectForElementUsingClosestIndicatedRect;
- (struct CGRect)initialPresentationRectInHostViewForSheet;
- (id)hostViewForSheet;
- (void)updateSheetPosition;
- (void)updatePositionInformation;
- (void)cleanupSheet;
- (_Bool)synchronouslyRetrievePositionInformation;
- (RetainPtr_c682c8da)defaultActionsForImageSheet:(id)arg1;
- (void)_createSheetWithElementActions:(id)arg1 defaultTitle:(id)arg2 showLinkTitle:(_Bool)arg3;
- (long long)_presentationStyleForPositionInfo:(const struct InteractionInformationAtPosition *)arg1 elementInfo:(id)arg2;
- (_Bool)_appendAppLinkOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (RetainPtr_c682c8da)defaultActionsForLinkSheet:(id)arg1;
- (id)_elementActionForDDAction:(id)arg1;
- (struct CGRect)presentationRectInHostViewForSheet;
- (_Bool)isShowingSheet;
- (void)interactionDidStartWithPositionInformation:(const struct InteractionInformationAtPosition *)arg1;
- (id)currentAvailableActionTitles;
- (Optional_d40c49cf)currentPositionInformation;
- (void)showImageSheet;
- (void)showLinkSheet;
- (void)showDataDetectorsSheet;

@end
