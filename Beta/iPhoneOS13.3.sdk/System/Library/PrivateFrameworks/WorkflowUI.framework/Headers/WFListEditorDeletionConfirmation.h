/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFListEditorDeletionConfirmation : NSObject

{
    unsigned long long _itemIndex;
    CDUnknownBlockType _confirmationHandler;
}

@property (nonatomic, readonly) unsigned long long itemIndex;
@property (nonatomic, readonly) CDUnknownBlockType confirmationHandler;

+ (id)confirmationForDeletingItemAtIndex:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;

- (id)initWithItemIndex:(unsigned long long)arg1 confirmationHandler:(CDUnknownBlockType)arg2;

@end
