//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebDocumentElement-Protocol.h>
#import <WebKitLegacy/WebDocumentView-Protocol.h>

__attribute__((visibility("hidden")))
@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>
{
}

- (id)elementAtPoint:(CGPoint)arg1 allowShadowContent:(BOOL)arg2;
- (id)elementAtPoint:(CGPoint)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)layout;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)drawRect:(CGRect)arg1;

@end

