/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTableItem.h>

@class NSMapTable;

@interface WFCustomTableItem : WFTableItem

{
    CDUnknownBlockType _configurationBlock;
    NSMapTable *_representedObjectChangeTargetSelectorTable;
}

@property (nonatomic, readonly) NSMapTable *representedObjectChangeTargetSelectorTable;
@property (retain, nonatomic) id representedObject;
@property (copy, nonatomic, readonly) CDUnknownBlockType configurationBlock;

- (_Bool)isEqual:(id)arg1;
- (void)configureCell:(id)arg1;
- (id)initWithCellClass:(Class)arg1 style:(long long)arg2 representedObject:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (void)setRepresentedObject:(id)arg1 updatingCell:(_Bool)arg2;
- (void)addRepresentedObjectChangeObserver:(id)arg1 action:(SEL)arg2;

@end
