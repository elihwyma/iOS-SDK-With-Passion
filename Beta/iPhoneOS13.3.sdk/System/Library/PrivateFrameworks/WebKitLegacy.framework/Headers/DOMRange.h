/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/DOMObject.h>

@class DOMNode, NSString, WebArchive;

@interface DOMRange : DOMObject

@property (nonatomic, readonly) WebArchive *webArchive;
@property (copy, nonatomic, readonly) NSString *markupString;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly) _Bool collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (copy, readonly) NSString *text;

+ (id)rangeForFirstPosition:(id)arg1 second:(id)arg2;

- (void)dealloc;
- (id)description;
- (struct CGRect)boundingBox;
- (id)_text;
- (void)detach;
- (id)startPosition;
- (id)endPosition;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (void)selectNodeContents:(id)arg1;
- (id)enclosingWordRange;
- (id)cloneContents;
- (id)cloneRange;
- (void)selectNode:(id)arg1;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (id)firstNode;
- (void)insertNode:(id)arg1;
- (void)setStartAfter:(id)arg1;
- (void)setEndAfter:(id)arg1;
- (id)textRects;
- (void)collapse:(_Bool)arg1;
- (id)lineBoxRects;
- (struct CGImage *)renderedImageForcingBlackText:(_Bool)arg1;
- (void)setStartBefore:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)deleteContents;
- (id)extractContents;
- (void)surroundContents:(id)arg1;
- (id)toString;
- (id)createContextualFragment:(id)arg1;
- (short)compareNode:(id)arg1;
- (_Bool)intersectsNode:(id)arg1;
- (short)comparePoint:(id)arg1 offset:(int)arg2;
- (_Bool)isPointInRange:(id)arg1 offset:(int)arg2;
- (void)expand:(id)arg1;
- (void)setStart:(id)arg1:(int)arg2;
- (void)setEnd:(id)arg1:(int)arg2;
- (short)compareBoundaryPoints:(unsigned short)arg1:(id)arg2;
- (void)move:(unsigned int)arg1 inDirection:(int)arg2;
- (void)extend:(unsigned int)arg1 inDirection:(int)arg2;

@end
