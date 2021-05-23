/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSCoder.h>

@class NSMutableArray;

@interface MTStorageReader : NSCoder

{
    NSMutableArray *_stack;
}

@property (retain, nonatomic) NSMutableArray *stack;
@property (nonatomic, readonly) unsigned long long mtType;
@property (nonatomic, readonly) NSCoder *mtCoder;

+ (_Bool)_dictionaryIsForSerializableObject:(id)arg1;
+ (id)_unwrap:(id)arg1;

- (_Bool)allowsKeyedCoding;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (id)_decodeObject:(id)arg1;
- (id)_objectForDictionary:(id)arg1;

@end
