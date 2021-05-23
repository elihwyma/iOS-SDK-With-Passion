/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDOMObjectProviding, SXDataRecordValueTransformerFactory, SXDataTableTextSourceFactory, SXTextComponentLayoutHosting;

@interface SXDataTableComponentSizerFactory : NSObject

{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXTextComponentLayoutHosting> _textComponentLayoutHosting;
    id <SXDataTableTextSourceFactory> _textSourceFactory;
    id <SXDataRecordValueTransformerFactory> _recordValueTransformerFactory;
}

@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) id <SXTextComponentLayoutHosting> textComponentLayoutHosting;
@property (nonatomic, readonly) id <SXDataTableTextSourceFactory> textSourceFactory;
@property (nonatomic, readonly) id <SXDataRecordValueTransformerFactory> recordValueTransformerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;

- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)initWithDOMObjectProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 recordValueTransformerFactory:(id)arg4;

@end
