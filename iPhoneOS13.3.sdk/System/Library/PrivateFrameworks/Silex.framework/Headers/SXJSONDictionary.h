//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>


@class NSArray, NSDictionary, NSMutableDictionary;

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration>
{
    id /* CDUnknownBlockType */ _objectValueClassBlock;
    id /* CDUnknownBlockType */ _valueClassBlock;
    NSDictionary *_json;
    NSMutableDictionary *_objects;
    NSArray *_keys;
    NSUInteger _count;
}

@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
@property(readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(readonly, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ valueClassBlock; // @synthesize valueClassBlock=_valueClassBlock;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ objectValueClassBlock; // @synthesize objectValueClassBlock=_objectValueClassBlock;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)jsonDictionary;
- (id)NSDictionary;
- (id)allObjects;
- (id)allKeys;
- (id)keyAtIndex:(NSUInteger)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithValueClassBlock:(id /* CDUnknownBlockType */)arg1 objectValueClassBlock:(id /* CDUnknownBlockType */)arg2 purgeBlock:(id /* CDUnknownBlockType */)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5;

@end

