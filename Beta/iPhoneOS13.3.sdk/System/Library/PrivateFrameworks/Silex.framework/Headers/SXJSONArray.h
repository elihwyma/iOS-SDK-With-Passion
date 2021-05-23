/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSArray, NSMutableArray;

@interface SXJSONArray : SXJSONObject

{
    CDUnknownBlockType _objectValueClassBlock;
    CDUnknownBlockType _valueClassBlock;
    NSArray *_json;
    NSMutableArray *_objects;
    unsigned long long _count;
}

@property (nonatomic, readonly) CDUnknownBlockType objectValueClassBlock;
@property (nonatomic, readonly) CDUnknownBlockType valueClassBlock;
@property (nonatomic, readonly) NSArray *json;
@property (nonatomic, readonly) NSMutableArray *objects;
@property (nonatomic, readonly) unsigned long long count;

- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)firstObject;
- (id)lastObject;
- (id)initWithValueClassBlock:(CDUnknownBlockType)arg1 objectValueClassBlock:(CDUnknownBlockType)arg2 purgeBlock:(CDUnknownBlockType)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5;
- (id)NSArray;

@end
