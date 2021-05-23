/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class WKDOMRange;

@interface WKDOMTextIterator : NSObject

{
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator>> _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16> _upconvertedText;
}

@property (readonly) _Bool atEnd;
@property (readonly) WKDOMRange *currentRange;
@property (readonly) unsigned long long currentTextLength;
@property (readonly) const unsigned short *currentTextPointer;

- (id)initWithRange:(id)arg1;
- (id).cxx_construct;
- (void)advance;

@end
