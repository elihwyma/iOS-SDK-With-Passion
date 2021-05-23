/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSExtensionContext, NSString;

@interface NUExtensionURLHandler : NSObject

{
    NSExtensionContext *_extensionContext;
}

@property (nonatomic, readonly) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)openURL:(id)arg1;
- (id)initWithExtensionContext:(id)arg1;
- (void)openURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
