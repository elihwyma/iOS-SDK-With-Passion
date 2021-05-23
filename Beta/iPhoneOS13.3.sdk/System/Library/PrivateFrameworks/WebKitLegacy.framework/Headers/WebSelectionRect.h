/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

#import <WebKitLegacy/Swift-Protocol.h>

@interface WebSelectionRect : NSObject <Swift>

{
    struct CGRect m_rect;
    int m_writingDirection;
    _Bool m_isLineBreak;
    _Bool m_isFirstOnLine;
    _Bool m_isLastOnLine;
    _Bool m_containsStart;
    _Bool m_containsEnd;
    _Bool m_isInFixedPosition;
    _Bool m_isHorizontal;
}

@property (nonatomic) struct CGRect rect;
@property (nonatomic) int writingDirection;
@property (nonatomic) _Bool isLineBreak;
@property (nonatomic) _Bool isFirstOnLine;
@property (nonatomic) _Bool isLastOnLine;
@property (nonatomic) _Bool containsStart;
@property (nonatomic) _Bool containsEnd;
@property (nonatomic) _Bool isInFixedPosition;
@property (nonatomic) _Bool isHorizontal;

+ (struct CGRect)startEdge:(id)arg1;
+ (struct CGRect)endEdge:(id)arg1;
+ (id)selectionRect;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
