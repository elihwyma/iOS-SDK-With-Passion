/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IKArray : NSObject

{
    id _obj0;
    id _obj1;
    NSMutableArray *_arrayStore;
}

@property (retain, nonatomic) id obj0;
@property (retain, nonatomic) id obj1;
@property (retain, nonatomic) NSMutableArray *arrayStore;

+ (id)array;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (long long)count;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(long long)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)firstObject;
- (id)lastObject;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setupWithNSArray:(id)arg1;
- (id)toNSArray;
- (id)initWithNSArray:(id)arg1;

@end
