/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <ITMLKit/IKViewElement.h>

@interface IKViewElement (TVMLKitAdditions)

@property (nonatomic, readonly) long long tv_scaleMode;
@property (nonatomic, getter=tv_isParsedOnce, setter=tv_setParsedOnce:) _Bool tv_parsedOnce;
@property (weak, nonatomic, setter=tv_setProxyView:) id tv_proxyView;

+ (id)tv_approximateViewElementForView:(id)arg1;

- (unsigned long long)tv_elementType;
- (void)tv_dispatchEvent:(id)arg1 canBubble:(_Bool)arg2 isCancelable:(_Bool)arg3 extraInfo:(id)arg4 targetResponder:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (long long)tv_semanticContentAttribute;
- (id)tv_associatedViewElementWithDefaultClass:(Class)arg1;
- (long long)tv_scaleModeWithDefaultMode:(long long)arg1;
- (id)tv_associatedViewElement;
- (id)itemElementsOfType:(unsigned long long)arg1;
- (void)retrievePresentationDocumentWithResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
