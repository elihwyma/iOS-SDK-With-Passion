/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSMutableDictionary;

@interface PUTileTree : NSObject <Swift>

{
    _Bool _useUniqueLeafs;
    NSMutableDictionary *__objectsByTileIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *_objectsByTileIdentifier;
@property (nonatomic, readonly) _Bool useUniqueLeafs;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllObjects;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initUsingUniqueLeafs:(_Bool)arg1;
- (id)initWithTileTree:(id)arg1;
- (void)addObject:(id)arg1 withTileIdentifier:(id)arg2;
- (void)removeObject:(id)arg1 withTileIdentifier:(id)arg2;
- (void)removeObjectWithTileIdentifier:(id)arg1;
- (_Bool)containsObject:(id)arg1 withTileIdentifier:(id)arg2;
- (id)objectWithTileIdentifier:(id)arg1;
- (void)enumerateObjectsWithTileIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
