/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString, PDFHostViewController;

@interface PDFHostExtensionContext : NSExtensionContext

{
    PDFHostViewController *_hostViewController;
}

@property (weak, nonatomic) PDFHostViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (oneway void)extensionToHost:(id)arg1;

@end
