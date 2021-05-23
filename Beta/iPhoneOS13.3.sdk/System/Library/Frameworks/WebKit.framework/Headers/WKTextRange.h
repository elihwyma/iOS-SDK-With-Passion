/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UITextRange.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WKTextRange : UITextRange

{
    struct CGRect _startRect;
    struct CGRect _endRect;
    _Bool _isNone;
    _Bool _isRange;
    _Bool _isEditable;
    NSArray *_selectionRects;
    unsigned long long _selectedTextLength;
}

@property (nonatomic) struct CGRect startRect;
@property (nonatomic) struct CGRect endRect;
@property (nonatomic) _Bool isNone;
@property (nonatomic) _Bool isRange;
@property (nonatomic) _Bool isEditable;
@property (nonatomic) unsigned long long selectedTextLength;
@property (copy, nonatomic) NSArray *selectionRects;

+ (id)textRangeWithState:(_Bool)arg1 isRange:(_Bool)arg2 isEditable:(_Bool)arg3 startRect:(struct CGRect)arg4 endRect:(struct CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isEmpty;
- (id)start;
- (id)end;
- (_Bool)_isRanged;
- (_Bool)_isCaret;

@end
