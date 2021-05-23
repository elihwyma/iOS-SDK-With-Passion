/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSExtensionContext.h>

@class NSString, _INUIExtensionContextState;

__attribute__((visibility("hidden")))
@interface _INUIExtensionContext : NSExtensionContext

{
    _INUIExtensionContextState *_currentExtensionContextState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)setExtensionContextState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_errorHandlingHostProxy;
- (struct CGSize)hostedViewMinimumAllowedSize;
- (struct CGSize)hostedViewMaximumAllowedSize;
- (struct CGSize)_bestAllowedSizeForAllowedSizesDictionary:(id)arg1;
- (id)interfaceParametersDescription;
- (void)_requestHandlingOfIntent:(id)arg1;
- (void)_willBeginEditing;

@end
