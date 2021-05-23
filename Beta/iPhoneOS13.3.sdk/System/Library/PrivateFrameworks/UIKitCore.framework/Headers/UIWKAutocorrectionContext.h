/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIWKAutocorrectionContext : NSObject

{
    NSString *_contextBeforeSelection;
    NSString *_selectedText;
    NSString *_contextAfterSelection;
    NSString *_markedText;
    struct _NSRange _rangeInMarkedText;
}

@property (copy, nonatomic) NSString *contextBeforeSelection;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSString *contextAfterSelection;
@property (copy, nonatomic) NSString *markedText;
@property (nonatomic) struct _NSRange rangeInMarkedText;

- (void)dealloc;

@end
