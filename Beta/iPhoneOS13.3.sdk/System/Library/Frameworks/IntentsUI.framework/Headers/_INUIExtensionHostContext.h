/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@protocol INUIExtensionHostContextDelegate;

__attribute__((visibility("hidden")))
@interface _INUIExtensionHostContext : NSExtensionContext

{
    id <INUIExtensionHostContextDelegate> _extensionHostContextDelegate;
}

@property (weak, nonatomic) id <INUIExtensionHostContextDelegate> extensionHostContextDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)requestHandlingOfIntent:(id)arg1;
- (void)willBeginEditing;
- (void)setExtensionContextState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_errorHandlingExtensionContextProxy;

@end
