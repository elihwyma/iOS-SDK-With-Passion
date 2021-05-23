/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPItem, NSCache;

@protocol FPItemHierarchyLookingUp;

@interface FPItemHierarchyLookup : NSObject

{
    FPItem *_item;
    id <FPItemHierarchyLookingUp> _hierarchyServicer;
    NSCache *_parentHierarchyItems;
}

@property (retain, nonatomic) NSCache *parentHierarchyItems;
@property (weak) id <FPItemHierarchyLookingUp> hierarchyServicer;

- (id)valueForKeyPath:(id)arg1;
- (id)initWithItem:(id)arg1 parentHierarchyItems:(id)arg2 hierarchyServicer:(id)arg3;
- (id)_fetchItemWithID:(id)arg1;

@end
