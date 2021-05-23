/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface WFListEditorUpdateItem : NSObject

{
    NSNumber *_indexBeforeUpdate;
    NSNumber *_indexAfterUpdate;
    unsigned long long _updateAction;
}

@property (nonatomic, readonly) NSNumber *indexBeforeUpdate;
@property (nonatomic, readonly) NSNumber *indexAfterUpdate;
@property (nonatomic, readonly) unsigned long long updateAction;

+ (id)itemInsertedAtIndex:(unsigned long long)arg1;
+ (id)itemDeletedAtIndex:(unsigned long long)arg1;
+ (id)itemUpdatedAtIndex:(unsigned long long)arg1;
+ (id)itemMovedFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAction:(unsigned long long)arg1 indexBeforeUpdate:(id)arg2 indexAfterUpdate:(id)arg3;

@end
