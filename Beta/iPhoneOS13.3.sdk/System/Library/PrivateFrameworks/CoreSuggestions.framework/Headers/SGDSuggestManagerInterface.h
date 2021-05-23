/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGDSuggestManagerInterface : NSObject

+ (void)initialize;
+ (id)xpcInterface;
+ (void)_registerWhitelistBlock:(CDUnknownBlockType)arg1 forProtocol:(id)arg2;
+ (id)xpcInterfaceForProtocol:(id)arg1;
+ (void)_addSGXPCResponseToReplyWhitelistForMethods:(struct objc_method_description *)arg1 count:(unsigned int)arg2 interface:(id)arg3;
+ (void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg1 interface:(id)arg2;
+ (void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3;
+ (void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3;
+ (void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3;

@end
