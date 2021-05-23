/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSExtensionItem.h>

@class AKAppleIDAuthenticationContext;

@interface NSExtensionItem (AKExtensionItem)

@property (retain, nonatomic, setter=ak_setContext:) AKAppleIDAuthenticationContext *ak_context;

+ (id)extensionItemWithAppleIDAuthenticationContext:(id)arg1;

@end
