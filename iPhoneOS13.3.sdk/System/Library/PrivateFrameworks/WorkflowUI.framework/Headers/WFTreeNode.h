//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray;
@protocol WFTreeObserver;

@interface WFTreeNode : NSObject
{
    id _representedObject;
    WFTreeNode *_parentNode;
    id <WFTreeObserver> _observer;
    NSArray *_flattenedDescendents;
    NSMutableArray *_mutableChildNodes;
}

@property(readonly, nonatomic) NSMutableArray *mutableChildNodes; // @synthesize mutableChildNodes=_mutableChildNodes;
@property(readonly, nonatomic) NSArray *flattenedDescendents; // @synthesize flattenedDescendents=_flattenedDescendents;
@property(nonatomic) __weak id <WFTreeObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) __weak WFTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
// - (void).cxx_destruct;
- (id)paddedStringAtDepth:(NSUInteger)arg1;
- (id)debugDescriptionAtDepth:(NSUInteger)arg1;
- (id)debugDescription;
- (void)enumerateDescendentsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)enumerateWithBlock:(id /* CDUnknownBlockType */)arg1 currentLevel:(NSUInteger)arg2;
- (id)descendentNodeAtRelativeIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property(readonly, nonatomic) NSIndexPath *indexPath;
- (void)setFlattenedDescendents:(id)arg1 changeSource:(id)arg2;
- (void)childDescendentsDidChange:(id)arg1 oldValue:(id)arg2 changeSource:(id)arg3;
- (void)moveNodeFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (void)removeNodeAtIndex:(NSUInteger)arg1;
- (void)removeNode:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addNode:(id)arg1;
@property(copy, nonatomic) NSArray *childNodes;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;

@end

