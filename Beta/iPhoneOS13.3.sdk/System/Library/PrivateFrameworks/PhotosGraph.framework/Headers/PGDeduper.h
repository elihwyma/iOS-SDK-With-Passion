/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface PGDeduper : NSObject

{
    NSSet *_identifiersOfRequiredItems;
}

@property (copy, nonatomic) NSSet *identifiersOfRequiredItems;

- (_Bool)itemIsRequired:(id)arg1;
- (id)requiredItemsInItems:(id)arg1;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end
