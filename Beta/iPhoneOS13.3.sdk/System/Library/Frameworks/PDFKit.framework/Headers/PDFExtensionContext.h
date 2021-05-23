/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString, PDFExtensionViewController;

@interface PDFExtensionContext : NSExtensionContext

{
    PDFExtensionViewController *_extensionViewController;
}

@property (weak, nonatomic) PDFExtensionViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (oneway void)hostToExtension:(id)arg1;

@end
