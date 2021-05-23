/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface PBObjectToObjectCoercion : NSObject

{
    Class _theClass;
    NSMutableDictionary *_blockByClass;
    NSMutableOrderedSet *_classOrder;
}

@property (retain, nonatomic) Class theClass;
@property (retain, nonatomic) NSMutableDictionary *blockByClass;
@property (retain, nonatomic) NSMutableOrderedSet *classOrder;

- (id)initWithClass:(Class)arg1;
- (void)addCoercionToClass:(Class)arg1 block:(CDUnknownBlockType)arg2;
- (id)availableClasses;
- (_Bool)canCoerceToObjectOfClass:(Class)arg1;
- (id)coerceObject:(id)arg1 toObjectOfClass:(Class)arg2 outError:(id *)arg3;

@end
