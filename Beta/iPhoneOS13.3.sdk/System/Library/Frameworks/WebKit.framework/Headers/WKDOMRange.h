/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WKDOMNode;

@interface WKDOMRange : NSObject

{
    struct RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range>> _impl;
}

@property (retain, readonly) WKDOMNode *startContainer;
@property (readonly) long long startOffset;
@property (retain, readonly) WKDOMNode *endContainer;
@property (readonly) long long endOffset;
@property (copy, readonly) NSString *text;
@property (readonly) _Bool isCollapsed;
@property (readonly) NSArray *textRects;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithDocument:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (id)_initWithImpl:(struct Range *)arg1;
- (void)collapse:(_Bool)arg1;
- (id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)arg1 inDirection:(long long)arg2;
- (struct OpaqueWKBundleRangeHandle *)_copyBundleRangeHandleRef;

@end
