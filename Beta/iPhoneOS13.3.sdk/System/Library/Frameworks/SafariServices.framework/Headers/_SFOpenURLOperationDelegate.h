/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenURLOperationDelegate : NSObject

{
    CDUnknownBlockType _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didFinishWithSuccess:(_Bool)arg1;

@end
