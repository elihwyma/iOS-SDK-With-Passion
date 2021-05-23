/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@interface TUConversationManagerXPCClient : NSObject

+ (id)asynchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setSynchronousServer:(id)arg1;
+ (id)conversationManagerServerXPCInterface;
+ (id)conversationManagerClientXPCInterface;
+ (id)conversationManagerAllowedClasses;

@end
