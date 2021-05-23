/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface ENTProtocolUtil : NSObject

+ (void)skipType:(int)arg1 onProtocol:(id)arg2;
+ (id)_readValueForField:(id)arg1 fromProtocol:(id)arg2;
+ (void)readFromProtocol:(id)arg1 ontoObject:(id)arg2;
+ (void)_writeValue:(id)arg1 forField:(id)arg2 toProtocol:(id)arg3;
+ (id)readMessage:(id)arg1 fromProtocol:(id)arg2 withResponseTypes:(id)arg3;
+ (void)writeObject:(id)arg1 ontoProtocol:(id)arg2;
+ (void)sendMessage:(id)arg1 toProtocol:(id)arg2 withArguments:(id)arg3;

@end
