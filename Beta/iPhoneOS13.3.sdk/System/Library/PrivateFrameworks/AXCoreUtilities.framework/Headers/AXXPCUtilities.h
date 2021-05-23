/*
 Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
 */

#import <Foundation/NSObject.h>

@interface AXXPCUtilities : NSObject

+ (id)dictionaryFromXPCMessage:(id)arg1 error:(id *)arg2;
+ (id)copyXPCMessageFromDictionary:(id)arg1 inReplyToXPCMessage:(id)arg2 error:(id *)arg3;

@end
