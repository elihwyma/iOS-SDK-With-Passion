/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, UITextPosition;

__attribute__((visibility("hidden")))
@interface _UIPositionedAttributedString : NSObject

{
    NSAttributedString *_string;
    UITextPosition *_position;
}

@property (copy, nonatomic, readonly) NSAttributedString *string;
@property (nonatomic, readonly) UITextPosition *position;

+ (id)attributedString:(id)arg1 atPosition:(id)arg2;

- (id)description;

@end
