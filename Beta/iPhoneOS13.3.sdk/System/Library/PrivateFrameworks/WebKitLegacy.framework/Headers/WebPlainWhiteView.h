/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebCore/WAKView.h>

#import <WebKitLegacy/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebPlainWhiteView : WAKView <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDataSource:(id)arg1;
- (void)layout;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsLayout:(_Bool)arg1;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (id)elementAtPoint:(struct CGPoint)arg1 allowShadowContent:(_Bool)arg2;

@end
