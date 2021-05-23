/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <ITMLKit/IKAppDocument.h>

@interface IKAppDocument (TVMLKit)

- (struct CGSize)tv_adjustedWindowSize;
- (id)tv_interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (_Bool)tv_handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id *)arg4;
- (id)tv_featuresManager;
- (_Bool)tv_isPresentedModal;

@end
