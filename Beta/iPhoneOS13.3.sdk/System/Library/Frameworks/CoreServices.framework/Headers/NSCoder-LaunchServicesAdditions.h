/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (LaunchServicesAdditions)

- (id)ls_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)ls_decodeArrayWithValuesOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeSetWithValuesOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClass:(Class)arg2 forKey:(id)arg3;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClasses:(id)arg2 forKey:(id)arg3;

@end
