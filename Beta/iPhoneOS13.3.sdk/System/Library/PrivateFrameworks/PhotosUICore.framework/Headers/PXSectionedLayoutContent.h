/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface PXSectionedLayoutContent : NSObject

{
    NSMutableArray *_sections;
    long long _axis;
    struct CGSize _internalContentSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) long long axis;
@property (nonatomic) struct CGSize internalContentSize;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (copy, nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) struct CGSize contentSize;

- (id)init;
- (id)description;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)addSection:(id)arg1;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)_addSection:(id)arg1;
- (void)removeSection:(id)arg1;
- (void)_removeSection:(id)arg1;
- (id)initWithAxis:(long long)arg1 insets:(struct UIEdgeInsets)arg2;
- (void)removeAllSections;
- (void)removeSections:(id)arg1;
- (void)exchangeSectionAtIndex:(unsigned long long)arg1 withSectionAtIndex:(unsigned long long)arg2;
- (void)updateSections:(id)arg1;
- (void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_exchangeSectionAtIndex:(unsigned long long)arg1 withSectionAtIndex:(unsigned long long)arg2;
- (void)_adjustSectionsFromIndex:(long long)arg1;

@end
