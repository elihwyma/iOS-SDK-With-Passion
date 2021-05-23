/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusSearchInfo : NSObject

{
    _Bool _forceFocusToLeaveContainer;
    CDUnknownBlockType _evaluator;
}

@property (copy, nonatomic) CDUnknownBlockType evaluator;
@property (nonatomic) _Bool forceFocusToLeaveContainer;

+ (id)defaultInfo;

- (_Bool)shouldIncludeFocusItem:(id)arg1;
- (id)initWithFocusEvaluator:(CDUnknownBlockType)arg1;

@end
