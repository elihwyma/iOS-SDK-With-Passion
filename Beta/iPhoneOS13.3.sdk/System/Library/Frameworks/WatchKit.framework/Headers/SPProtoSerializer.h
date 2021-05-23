/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@interface SPProtoSerializer : NSObject

+ (id)spPlistWithDictionary:(id)arg1;
+ (id)dataWithObject:(id)arg1;
+ (id)objectWithData:(id)arg1;
+ (id)dictionaryWithSPPlist:(id)arg1;
+ (id)spPlistWithArray:(id)arg1;
+ (id)protoSPObjectWithString:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithNumber:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithData:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithDictionary:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithArray:(id)arg1 forKey:(id)arg2;
+ (id)protoSPObjectWithObject:(id)arg1 forKey:(id)arg2;
+ (id)numberWithSPProtoSockPuppetObject:(id)arg1;
+ (id)arrayWithSPPlist:(id)arg1;

@end
