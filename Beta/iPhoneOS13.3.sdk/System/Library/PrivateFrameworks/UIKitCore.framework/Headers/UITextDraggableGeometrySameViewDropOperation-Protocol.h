/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSAttributedString, UITextRange;

@protocol UITextDraggableGeometrySameViewDropOperation <Swift>

@property (nonatomic, readonly) NSArray *sourceRanges;
@property (nonatomic, readonly) UITextRange *targetRange;
@property (nonatomic, readonly) NSAttributedString *text;
@property (nonatomic, readonly) unsigned long long operation;

@end
