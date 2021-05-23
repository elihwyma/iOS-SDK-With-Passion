/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface IKJSApplication : IKJSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *traitCollection;

- (void)update;
- (void)reload:(id)arg1:(id)arg2;
- (id)asPrivateIKJSApplication;
- (void)launchAppWithOptions:(id)arg1;
- (void)suspendAppWithOptions:(id)arg1;
- (void)resumeAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)exitAppWithOptions:(id)arg1;
- (void)updatedAppWithOptions:(id)arg1;
- (void)traitCollectionChanged:(id)arg1;
- (_Bool)requestDocumentWithContext:(id)arg1 response:(id)arg2;
- (void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3;

@end
