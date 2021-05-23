/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFModuleSummaryBasedParameterComponentStateWriter : NSObject

{
    CDUnknownBlockType _updateBlock;
}

@property (nonatomic, readonly) CDUnknownBlockType updateBlock;

- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;
- (_Bool)setState:(id)arg1 ofParameter:(id)arg2;

@end
