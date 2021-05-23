/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKServiceRequest.h>

@class IKJSViewModelLink, NSString;

@interface IKUpdateServiceRequest : IKServiceRequest

{
    IKJSViewModelLink *_link;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)documentDidChangeForViewModelLink:(id)arg1;
- (void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2;
- (void)onSend;
- (void)onCancel;

@end
