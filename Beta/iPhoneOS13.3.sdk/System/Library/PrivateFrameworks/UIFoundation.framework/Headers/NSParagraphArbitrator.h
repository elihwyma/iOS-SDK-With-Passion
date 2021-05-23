/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSAttributedString;

@interface NSParagraphArbitrator : NSObject

{
    NSAttributedString *_attributedString;
    CDUnknownBlockType _lineWidth;
    CDUnknownBlockType _validateLineBreakContext;
    unsigned long long _lineBreakStrategy;
    double _hyphenationFactor;
    long long _typesetterBehavior;
    struct _NSRange _paragraphRange;
    struct _NSRange _previousLineRange;
}

@property (retain) NSAttributedString *attributedString;
@property struct _NSRange paragraphRange;
@property (copy) CDUnknownBlockType lineWidth;
@property (copy) CDUnknownBlockType validateLineBreakContext;
@property unsigned long long lineBreakStrategy;
@property double hyphenationFactor;
@property long long typesetterBehavior;
@property struct _NSRange previousLineRange;

+ (id)paragraphArbitratorWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (CDStruct_f03de906)lineBreakContextBeforeIndex:(unsigned long long)arg1 lineFragmentWidth:(double)arg2 range:(struct _NSRange)arg3;
- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)arg1;

@end
