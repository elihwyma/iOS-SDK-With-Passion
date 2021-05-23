/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSCoder.h>

@class NSMutableArray;

@interface MTStorageWriter : NSCoder

{
    NSMutableArray *_stack;
}

@property (retain, nonatomic) NSMutableArray *stack;
@property (nonatomic, readonly) unsigned long long mtType;
@property (nonatomic, readonly) NSCoder *mtCoder;

- (id)init;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (id)encodedDictionary;
- (void)_encodeObject:(id)arg1 forKey:(id)arg2;
- (id)_serializingProtocol;
- (id)_dictionaryForProtocolObject:(id)arg1;
- (void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2;

@end
