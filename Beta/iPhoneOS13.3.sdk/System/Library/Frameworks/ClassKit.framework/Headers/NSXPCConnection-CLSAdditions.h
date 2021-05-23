/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (CLSAdditions)

@property (nonatomic, readonly) _Bool cls_isAppExtension;
@property (copy, nonatomic, readonly) NSString *cls_signingIdentifier;

@end
