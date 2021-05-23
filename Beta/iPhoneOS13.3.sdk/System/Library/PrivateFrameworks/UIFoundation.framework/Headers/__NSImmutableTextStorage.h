/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTextStorage.h>

@class NSAttributedString, NSLayoutManager, NSTextContainer;

__attribute__((visibility("hidden")))
@interface __NSImmutableTextStorage : NSTextStorage

{
    NSAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

@property (readonly) NSLayoutManager *layoutManager;
@property (readonly) NSTextContainer *textContainer;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)string;
- (void)dealloc;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithAttributedString:(id)arg1;
- (void)fixAttributesInRange:(struct _NSRange)arg1;
- (void)processEditing;

@end
