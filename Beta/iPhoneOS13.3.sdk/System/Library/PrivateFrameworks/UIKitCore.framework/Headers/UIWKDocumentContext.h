/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSMutableDictionary, NSString;

@interface UIWKDocumentContext : NSObject

{
    NSMutableDictionary *_selectionRects;
    NSObject *_contextBefore;
    NSObject *_selectedText;
    NSObject *_contextAfter;
    NSObject *_markedText;
    NSAttributedString *_annotatedText;
    struct _NSRange _selectedRangeInMarkedText;
}

@property (retain, nonatomic) NSMutableDictionary *_selectionRects;
@property (nonatomic, readonly) NSString *_contextBeforeString;
@property (nonatomic, readonly) NSString *_selectedTextString;
@property (nonatomic, readonly) NSString *_contextAfterString;
@property (nonatomic, readonly) NSString *_markedTextString;
@property (copy, nonatomic) NSObject *contextBefore;
@property (copy, nonatomic) NSObject *selectedText;
@property (copy, nonatomic) NSObject *contextAfter;
@property (copy, nonatomic) NSObject *markedText;
@property (nonatomic) struct _NSRange selectedRangeInMarkedText;
@property (nonatomic, readonly) struct _NSRange selectedTextRange;
@property (nonatomic, readonly) struct _NSRange markedTextRange;
@property (copy, nonatomic) NSAttributedString *annotatedText;

- (id)init;
- (void)dealloc;
- (struct _NSRange)deltaForSelectionRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeContainedWithinRect:(struct CGRect)arg1;
- (void)resetTextRects;
- (void)addTextRect:(struct CGRect)arg1 forCharacterRange:(struct _NSRange)arg2;
- (unsigned long long)closestCharacterIndexForPoint:(struct CGPoint)arg1;
- (id)characterRectsForCharacterRange:(struct _NSRange)arg1;
- (id)stringContainedWithinRect:(struct CGRect)arg1;
- (void)enumerateLayoutRects:(CDUnknownBlockType)arg1;

@end
