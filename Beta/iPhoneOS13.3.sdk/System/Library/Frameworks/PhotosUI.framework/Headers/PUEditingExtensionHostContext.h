/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSExtensionContext.h>

@interface PUEditingExtensionHostContext : NSExtensionContext

{
    CDUnknownBlockType _contentEditingOutputCommitHandler;
}

@property (copy) CDUnknownBlockType contentEditingOutputCommitHandler;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
