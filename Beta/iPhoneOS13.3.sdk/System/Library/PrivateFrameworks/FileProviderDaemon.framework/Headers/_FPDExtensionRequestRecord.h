/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPXPCAutomaticErrorProxy, NSDate;

__attribute__((visibility("hidden")))
@interface _FPDExtensionRequestRecord : NSObject

{
    FPXPCAutomaticErrorProxy *_proxy;
    SEL _selector;
    NSDate *_timeout;
}

@property (weak) FPXPCAutomaticErrorProxy *proxy;
@property (nonatomic) SEL selector;
@property (nonatomic) NSDate *timeout;

- (id)description;

@end
