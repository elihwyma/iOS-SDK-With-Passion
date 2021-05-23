/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UITitleContent : NSObject

{
    NSAttributedString *_attributedText;
    double _width;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) double width;

+ (id)contentWithTitle:(id)arg1 attributes:(id)arg2 button:(id)arg3;

- (id)description;
- (void)updateWithButton:(id)arg1;
- (void)updateWithTitleAttributes:(id)arg1 button:(id)arg2;

@end
