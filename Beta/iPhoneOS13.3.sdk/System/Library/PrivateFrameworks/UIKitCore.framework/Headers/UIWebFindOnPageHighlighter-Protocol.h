/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@protocol UIWebFindOnPageHighlighterDelegate;

@protocol UIWebFindOnPageHighlighter <Swift>

@property (copy, nonatomic, readonly) NSString *searchText;
@property (nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate;
@property (nonatomic, readonly) unsigned long long numberOfMatches;
@property (nonatomic, readonly) unsigned long long highlightedMatchIndex;

- (unsigned short)setSearchText:matchLimit: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelectionRect:textRects:contentViews:wobble: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightNextMatch;
- (unsigned short)highlightPreviousMatch;

@end
