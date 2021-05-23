/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSMutableDictionary;

@interface PLMultiKeyEntry

{
    NSMutableDictionary *_multiKeys;
}

@property (retain) NSMutableDictionary *multiKeys;

+ (void)load;

- (id)init;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)serializedForJSON;
- (id)keysForSubKey:(id)arg1 ofSubKeyType:(id)arg2;
- (id)objectsForSubKey:(id)arg1 ofSubKeyType:(id)arg2;

@end
