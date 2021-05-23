/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKServiceRequest.h>

@class IKAppDocument, IKJSViewModelLink, NSDictionary, NSString;

@interface IKDocumentServiceRequest : IKServiceRequest

{
    IKJSViewModelLink *_link;
    struct {
        _Bool hasResponseDictionaryDidChange;
        _Bool hasDocumentDidChange;
    } _dsrDelegateFlags;
    NSDictionary *_responseDictionary;
    IKAppDocument *_appDocument;
}

@property (copy, readonly) NSDictionary *responseDictionary;
@property (readonly) IKAppDocument *appDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegate:(id)arg1;
- (void)documentDidChangeForViewModelLink:(id)arg1;
- (void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2;
- (void)responseDictionaryDidChangeForViewModelLink:(id)arg1;
- (void)onSend;
- (void)onCancel;

@end
