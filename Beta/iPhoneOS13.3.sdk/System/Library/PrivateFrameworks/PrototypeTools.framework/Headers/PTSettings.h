/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@interface PTSettings : NSObject

+ (id)settingsControllerModule;
+ (id)settingsFromArchiveDictionary:(id)arg1;
+ (_Bool)_supportsArchivingCustomClass:(Class)arg1;
+ (_Bool)_supportsArchivingStructType:(id)arg1;
+ (id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2;
+ (id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2;
+ (id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2;
+ (id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2;
+ (_Bool)ignoresKey:(id)arg1;

@end
