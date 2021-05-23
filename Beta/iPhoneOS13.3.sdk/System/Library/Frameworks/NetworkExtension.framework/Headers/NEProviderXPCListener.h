/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSXPCListener.h>

@class NSString;

@interface NEProviderXPCListener : NSXPCListener

{
    NSString *_extensionContextClassName;
}

@property (nonatomic, readonly) NSString *extensionContextClassName;

- (id)initWithExtensionContextClassName:(id)arg1;

@end
