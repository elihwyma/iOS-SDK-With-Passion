/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSMutableArray, NSString;

@interface TSKTreeNode : TSPObject

{
    NSString *mDisplayName;
    id mObject;
    NSMutableArray *mChildren;
}

@property (retain, nonatomic) id dataObject;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSString *name;

- (void)dealloc;
- (id)description;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1;
- (id)childEnumerator;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)removeAllChildren;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (void)enumerateAllChildrenWithBlock:(CDUnknownBlockType)arg1;
- (id)shallowCopy;
- (id)nodeWithObject:(id)arg1;
- (long long)indexOfNodeWithObject:(id)arg1;
- (_Bool)hasChildWithName:(id)arg1;
- (void)addChildWithName:(id)arg1 object:(id)arg2;
- (void)addObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeChildWithName:(id)arg1;
- (void)removeChildWithDataObject:(id)arg1;

@end
