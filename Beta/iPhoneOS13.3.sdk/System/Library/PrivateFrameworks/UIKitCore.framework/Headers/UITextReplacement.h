/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UITextReplacement : NSObject

{
    UITextRange *_range;
    NSString *_originalText;
    NSString *_replacementText;
    NSString *_menuTitle;
    unsigned int _usageTrackingMask;
    CDUnknownBlockType _replacementCompletionBlock;
}

@property (nonatomic, readonly) UITextRange *range;
@property (nonatomic, readonly) NSString *originalText;
@property (nonatomic, readonly) NSString *replacementText;
@property (nonatomic, readonly) NSString *menuTitle;
@property (copy, nonatomic) CDUnknownBlockType replacementCompletionBlock;
@property (nonatomic) unsigned int usageTrackingMask;

+ (id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4;

- (void)didReplaceTextWithTarget:(id)arg1;

@end
