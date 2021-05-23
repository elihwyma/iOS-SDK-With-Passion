/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDebugValue.h>

@class NSString;

@interface PXDebugStringValue : PXDebugValue

{
    unsigned long long _highlightStyle;
    NSString *_string;
}

@property (nonatomic, readonly) NSString *string;

- (unsigned long long)highlightStyle;
- (id)initWithLabel:(id)arg1 string:(id)arg2 highlightStyle:(unsigned long long)arg3;
- (id)initWithLabel:(id)arg1 boolValue:(_Bool)arg2 positiveValue:(_Bool)arg3 positiveHighlighted:(_Bool)arg4 negativeHighlighted:(_Bool)arg5;
- (id)initWithLabel:(id)arg1 integerValue:(long long)arg2;
- (id)initWithLabel:(id)arg1 doubleValue:(double)arg2;
- (id)initWithLabel:(id)arg1 highlightedScore:(double)arg2;

@end
