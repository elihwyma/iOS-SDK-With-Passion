/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UITextPosition;

__attribute__((visibility("hidden")))
@interface _UITextInputStringTokenizerSubrange : NSObject

{
    NSString *_substring;
    UITextPosition *_basePosition;
    long long _indexOfBase;
    struct _NSRange _relevantRange;
}

@property (nonatomic, readonly) NSString *substring;
@property (nonatomic, readonly) UITextPosition *basePosition;
@property (nonatomic) long long indexOfBase;
@property (nonatomic) struct _NSRange relevantRange;

+ (id)subrangeWithSubstring:(id)arg1 basePosition:(id)arg2;

- (void)dealloc;

@end
