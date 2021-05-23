/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSExtensionContext.h>

@class NSBundle;

@interface INExtensionContextHost : NSExtensionContext

{
    NSBundle *_extensionBundle;
}

@property (retain, nonatomic) NSBundle *extensionBundle;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

@end
