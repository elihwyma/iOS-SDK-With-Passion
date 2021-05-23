/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface IKDeserializer : NSObject

+ (_Bool)token:(id *)arg1 andTokenSecret:(id *)arg2 fromQlineString:(id)arg3;
+ (id)objectFromJSONString:(id)arg1;
+ (id)_normalizedObjectForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)_URLForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)_dateForKey:(id)arg1 inDictionary:(id)arg2;

@end
