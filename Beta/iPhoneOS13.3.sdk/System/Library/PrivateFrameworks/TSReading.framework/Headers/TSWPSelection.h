/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKSelection.h>

#import <TSReading/Swift-Protocol.h>

@class NSString;

@interface TSWPSelection : TSKSelection <Swift>

{
    int _type;
    struct _NSRange _range;
    unsigned long long _headChar;
    unsigned long long _tailChar;
    _Bool _leadingEdge;
    unsigned long long _leadingCharIndex;
    _Bool _validVisualRanges;
    int _styleInsertionBehavior;
    int _caretAffinity;
    struct _NSRange _smartFieldRange;
    struct TSWPRangeVector _visualRanges;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) struct _NSRange rawRange;
@property (nonatomic, readonly) struct _NSRange smartFieldRange;
@property (nonatomic) unsigned long long headChar;
@property (nonatomic) unsigned long long tailChar;
@property (nonatomic, readonly) _Bool leadingEdge;
@property (nonatomic, readonly) unsigned long long leadingCharIndex;
@property (nonatomic, readonly) _Bool validVisualRanges;
@property (nonatomic, readonly) _Bool isVisual;
@property (nonatomic, readonly) int styleInsertionBehavior;
@property (nonatomic, readonly) int caretAffinity;
@property (nonatomic, readonly) _Bool isAtEndOfLine;
@property (nonatomic, readonly) _Bool isRange;
@property (nonatomic, readonly) _Bool isInsertionPoint;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct _NSRange range;

+ (id)selectionWithRange:(struct _NSRange)arg1;
+ (Class)archivedSelectionClass;
+ (id)selectionWithRange:(struct _NSRange)arg1 type:(int)arg2 leadingEdge:(_Bool)arg3 storage:(id)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)start;
- (id)initWithRange:(struct _NSRange)arg1;
- (id).cxx_construct;
- (unsigned long long)end;
- (_Bool)intersectsRange:(struct _NSRange)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (id)copyWithNewRange:(struct _NSRange)arg1;
- (id)copyWithNewType:(int)arg1;
- (_Bool)isEquivalentForInsertionStyle:(id)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(_Bool)arg6 storage:(id)arg7;
- (unsigned long long)visualRangeCount;
- (struct _NSRange)superRange;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange)arg2;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector *)arg1 startChar:(unsigned long long)arg2 endChar:(unsigned long long)arg3 rightToLeft:(_Bool)arg4 sameLine:(_Bool)arg5;
- (id)copyWithNewVisualTypeRange:(struct _NSRange)arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3;
- (id)visualRangesArray;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(_Bool)arg6 leadingCharIndex:(unsigned long long)arg7;
- (void)setHeadChar:(unsigned long long)arg1 tailChar:(unsigned long long)arg2;
- (void)i_setVisualRanges:(const struct TSWPRangeVector *)arg1;
- (unsigned long long)insertionChar;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange)arg2;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector *)arg1;
- (const struct TSWPRangeVector *)visualRanges;
- (struct TSWPRangeVector *)i_visualRanges;
- (unsigned long long)leftEdge;
- (unsigned long long)rightEdge;
- (_Bool)containsCharacterAtIndex:(unsigned long long)arg1;
- (_Bool)containsCharacterAtIndex:(unsigned long long)arg1 allowRightEdge:(_Bool)arg2;

@end
