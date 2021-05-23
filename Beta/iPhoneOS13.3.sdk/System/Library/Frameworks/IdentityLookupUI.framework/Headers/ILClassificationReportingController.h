/*
 Image: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface ILClassificationReportingController : NSObject

{
    UIViewController *_hostViewController;
    CDUnknownBlockType _completion;
}

@property (weak, nonatomic, readonly) UIViewController *hostViewController;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)initWithHostViewController:(id)arg1;
- (void)reportResponse:(id)arg1 forExtension:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)reportResponseViaNetwork:(id)arg1 forExtension:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)reportResponseViaSMS:(id)arg1 forExtension:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
