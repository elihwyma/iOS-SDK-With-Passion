/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface _UITextDraggableGeometrySameViewDropOperation : NSObject

{
    NSArray *_sourceRanges;
    UITextRange *_targetRange;
    NSAttributedString *_text;
    unsigned long long _operation;
}

@property (retain, nonatomic) NSArray *sourceRanges;
@property (retain, nonatomic) UITextRange *targetRange;
@property (retain, nonatomic) NSAttributedString *text;
@property (nonatomic) unsigned long long operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
