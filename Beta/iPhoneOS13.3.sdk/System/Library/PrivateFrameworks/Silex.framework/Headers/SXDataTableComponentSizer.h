/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@class NSString, SXDataTableComponentController, SXDataTableLayouter;

@protocol SXLayoutContext, SXTextComponentLayoutHosting;

@interface SXDataTableComponentSizer : SXComponentSizer

{
    id <SXTextComponentLayoutHosting> _textComponentLayoutHosting;
    SXDataTableLayouter *_layouter;
    SXDataTableComponentController *_dataTableComponentController;
    id <SXLayoutContext> _currentLayoutContext;
}

@property (weak, nonatomic, readonly) id <SXTextComponentLayoutHosting> textComponentLayoutHosting;
@property (retain, nonatomic) SXDataTableLayouter *layouter;
@property (retain, nonatomic) SXDataTableComponentController *dataTableComponentController;
@property (retain, nonatomic) id <SXLayoutContext> currentLayoutContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)tableStyleForComponent:(id)arg1;
- (id)componentForDataTableComponentController:(id)arg1;
- (id)DOMObjectProviderForDataTableComponentController:(id)arg1;
- (id)textComponentLayoutHostingForDataTableComponentController:(id)arg1;
- (id)documentColumnLayoutForDataTableComponentController:(id)arg1;
- (id)contentSizeCategoryForDataTableComponentController:(id)arg1;
- (id)unitConverterForDataTableComponentController:(id)arg1;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 textComponentLayoutHosting:(id)arg6 textSourceFactory:(id)arg7 recordValueTransformerFactory:(id)arg8;

@end
