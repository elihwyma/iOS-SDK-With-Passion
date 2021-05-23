/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject

{
    WebTextIteratorPrivate *_private;
}

- (void)dealloc;
- (id)initWithRange:(id)arg1;
- (id)currentText;
- (id)currentNode;
- (void)advance;
- (_Bool)atEnd;
- (id)currentRange;
- (const unsigned short *)currentTextPointer;
- (unsigned long long)currentTextLength;

@end
