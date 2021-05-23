/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FezAdditions)

@property (nonatomic, readonly) unsigned short fileHFSFlags;
@property (nonatomic, readonly) unsigned long long fileHFSResourceForkSize;

+ (id)dictionaryWithPlistData:(id)arg1;
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;

- (_Bool)__imIsMutable;
- (id)__imDeepCopy;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (id)plistData;
- (id)dictionaryFromChanges:(id)arg1;
- (id)__imDictionaryByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (id)_arrayForKey:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;

@end
