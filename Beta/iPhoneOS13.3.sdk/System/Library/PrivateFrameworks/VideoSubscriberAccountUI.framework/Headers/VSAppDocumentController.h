/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class IKAppDocument, IKViewElement, NSError, NSString, VSViewModel;

@protocol VSAppDocumentControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAppDocumentController : NSObject

{
    IKAppDocument *_appDocument;
    id <VSAppDocumentControllerDelegate> _delegate;
    VSViewModel *_viewModel;
    NSError *_viewModelError;
    IKViewElement *_templateElement;
}

@property (retain, nonatomic) IKAppDocument *appDocument;
@property (retain, nonatomic) VSViewModel *viewModel;
@property (retain, nonatomic) NSError *viewModelError;
@property (retain, nonatomic) IKViewElement *templateElement;
@property (weak, nonatomic) id <VSAppDocumentControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)documentNeedsUpdate:(id)arg1;
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithAppDocument:(id)arg1;
- (id)_imageItemProviderWithImageElement:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (id)_newViewModel;
- (void)_notiftyDidUpdateViewModel:(id)arg1;
- (void)_notiftyDidFailToUpdateViewModelWithError:(id)arg1;
- (_Bool)_updateViewModel:(id)arg1 WithError:(id *)arg2;

@end
