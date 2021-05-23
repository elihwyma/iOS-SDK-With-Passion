/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSExtensionContext, NSString;

@interface SXHostExtension : NSObject

{
    _Bool _isActive;
    NSExtensionContext *_extensionContext;
}

@property (weak, nonatomic) NSExtensionContext *extensionContext;
@property (nonatomic) _Bool isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool active;

- (_Bool)canOpenURL:(id)arg1;
- (id)initWithExtensionContext:(id)arg1;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extensionHostDidBecomeActive:(id)arg1;
- (void)extensionHostDidEnterBackground:(id)arg1;
- (void)extensionHostWillEnterForeground:(id)arg1;

@end
