/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutRow : NSObject

{
    _Bool _isValid;
    _Bool _complete;
    int _verticalAlignement;
    int _horizontalAlignement;
    _Bool _fixedItemSize;
    _UIFlowLayoutSection *_section;
    long long _index;
    NSMutableArray *_items;
    double _availableSpace;
    struct CGSize _rowSize;
    struct CGRect _rowFrame;
}

@property (weak, nonatomic) _UIFlowLayoutSection *section;
@property (nonatomic) struct CGSize rowSize;
@property (nonatomic) struct CGRect rowFrame;
@property (nonatomic) long long index;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic) _Bool complete;
@property (nonatomic) _Bool fixedItemSize;
@property (nonatomic) double availableSpace;

- (id)init;
- (void)invalidate;
- (id)snapshot;
- (void)addItem:(id)arg1 atEnd:(_Bool)arg2;
- (void)layoutRow;
- (long long)indexOfNearestItemAtPoint:(struct CGPoint)arg1;
- (id)copyFromSection:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
- (void)removeItemAtIndex:(long long)arg1;

@end
