/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <WebKitLegacy/DOMRange.h>

@class NSString;

@interface DOMRange (UIWebSelectionAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)webFrame;
- (struct CGRect)boundingRect;
- (_Bool)selectable;
- (id)parentBlock;
- (_Bool)canShrinkDirectlyToTextOnly;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (id)enclosingDocument;
- (id)asDomRange;
- (id)rangeOfContents;
- (_Bool)isSameBlock:(id)arg1;
- (_Bool)containsBlock:(id)arg1;
- (id)asDomNode;
- (_Bool)strictlyContainsBlock:(id)arg1;
- (id)largerParent;
- (_Bool)rendersAsBlock;
- (void)unionWithRange:(id)arg1;
- (_Bool)containsRange:(id)arg1;

@end
