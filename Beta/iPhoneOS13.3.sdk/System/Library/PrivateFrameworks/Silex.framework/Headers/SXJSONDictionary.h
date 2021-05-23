/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface SXJSONDictionary : SXJSONObject

{
    CDUnknownBlockType _objectValueClassBlock;
    CDUnknownBlockType _valueClassBlock;
    NSDictionary *_json;
    NSMutableDictionary *_objects;
    NSArray *_keys;
    unsigned long long _count;
}

@property (nonatomic, readonly) CDUnknownBlockType objectValueClassBlock;
@property (nonatomic, readonly) CDUnknownBlockType valueClassBlock;
@property (nonatomic, readonly) NSDictionary *json;
@property (nonatomic, readonly) NSMutableDictionary *objects;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) unsigned long long count;

- (id)description;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1;
- (id)allObjects;
- (id)jsonDictionary;
- (id)initWithValueClassBlock:(CDUnknownBlockType)arg1 objectValueClassBlock:(CDUnknownBlockType)arg2 purgeBlock:(CDUnknownBlockType)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5;
- (id)NSDictionary;

@end
