/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMDocument, NSDictionary;

@protocol IKJSViewModelLinkDelegate;

@interface IKJSViewModelLink : IKJSEventListenerObject <Swift>

{
    _Bool _isClosed;
    struct {
        _Bool hasDocumentDidChange;
        _Bool hasResponseDictionaryDidChange;
    } _delegateFlags;
    IKDOMDocument *_document;
    NSDictionary *_responseDictionary;
    id <IKJSViewModelLinkDelegate> _delegate;
}

@property (weak, nonatomic) id <IKJSViewModelLinkDelegate> delegate;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) IKDOMDocument *document;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)close:(id)arg1;
- (id)asPrivateIKJSViewModelLink;
- (void)_unhandled;

@end
