/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSISVariable, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLFLDVariableChangeRecord : _UIViewLFLDChangeRecord

{
    NSISVariable *_variable;
    double _value;
    UIView *_variableDelegate;
}

@property (nonatomic, readonly) NSISVariable *variable;
@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) UIView *variableDelegate;

- (id)description;
- (id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2;

@end
