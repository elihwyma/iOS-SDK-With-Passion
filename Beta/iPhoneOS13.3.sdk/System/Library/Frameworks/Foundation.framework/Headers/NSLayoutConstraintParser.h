/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface NSLayoutConstraintParser : NSObject

{
    NSString *_line;
    const char *_lineChars;
    unsigned long long _lineLength;
    unsigned long long _opts;
    _Bool _useHorizontalArrangement;
    NSDictionary *_metrics;
    NSDictionary *_views;
    id <NSLayoutItem> _containerView;
    NSMutableArray *_constraints;
    NSMutableArray *_unflushedWidthConstraints;
    NSMutableArray *_alignmentConstraints;
    unsigned long long _currentCharacter;
    NSMutableArray *_incompleteConstraints;
    id <NSLayoutItem> _parsedLeftView;
    id <NSLayoutItem> _parsedRightView;
    id <NSLayoutItem> _parsedConstrainedWidthView;
}

+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;

- (void)dealloc;
- (id)description;
- (id)constraints;
- (void)parse;
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
- (id)descriptionLineWithCurrentCharacterPointer;
- (void)failWithDescription:(id)arg1;
- (void)parseConnection;
- (id)parseView;
- (void)finishConstraint;
- (void)flushWidthConstraints;
- (struct _NSRange)rangeOfName;
- (id)layoutItemForKey:(id)arg1;
- (void)parsePredicateList;
- (void)parsePredicateWithParentheses;
- (void)parsePredicate;
- (void)parseOp;
- (double)parseConstant;
- (id)metricForKey:(id)arg1;
- (void)findContainerView;

@end
