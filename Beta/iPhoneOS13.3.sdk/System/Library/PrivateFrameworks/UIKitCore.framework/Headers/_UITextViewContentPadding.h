/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UITextViewContentPaddingDelegate;

__attribute__((visibility("hidden")))
@interface _UITextViewContentPadding : NSObject

{
    long long _mode;
    double _targetValue;
    double _currentValue;
    id <_UITextViewContentPaddingDelegate> _delegate;
}

@property (weak, nonatomic) id <_UITextViewContentPaddingDelegate> delegate;
@property (nonatomic) long long mode;
@property (nonatomic) double targetValue;
@property (nonatomic, readonly) double currentValue;

- (id)initWithDelegate:(id)arg1;
- (void)increaseToValue:(double)arg1;
- (void)_checkNewCurrentValue;
- (void)resetCurrentValue;

@end
