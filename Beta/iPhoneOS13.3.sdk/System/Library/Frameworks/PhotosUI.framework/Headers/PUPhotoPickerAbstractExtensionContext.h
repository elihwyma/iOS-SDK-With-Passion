/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSExtensionContext.h>

__attribute__((visibility("hidden")))
@interface PUPhotoPickerAbstractExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)proxy;
- (void)invalidateContext;
- (id)principalObject;
- (void)firstPayloadFromExtensionItems:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
