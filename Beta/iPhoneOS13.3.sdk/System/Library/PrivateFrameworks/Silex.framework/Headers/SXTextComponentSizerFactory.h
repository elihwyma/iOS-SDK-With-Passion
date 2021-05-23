/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDOMObjectProviding, SXTextComponentLayoutHosting, SXTextSourceFactory;

@interface SXTextComponentSizerFactory : NSObject

{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXTextComponentLayoutHosting> _textComponentLayoutHosting;
    id <SXTextSourceFactory> _textSourceFactory;
}

@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) id <SXTextComponentLayoutHosting> textComponentLayoutHosting;
@property (nonatomic, readonly) id <SXTextSourceFactory> textSourceFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;

- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)initWithDOMObjectProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3;

@end
