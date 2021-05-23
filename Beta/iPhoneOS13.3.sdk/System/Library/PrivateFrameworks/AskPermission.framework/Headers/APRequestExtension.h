/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <Foundation/NSObject.h>

@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject

{
    NSExtensionContext *_extensionContext;
}

@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)_finish;
- (void)requestUpdatedWithResult:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
