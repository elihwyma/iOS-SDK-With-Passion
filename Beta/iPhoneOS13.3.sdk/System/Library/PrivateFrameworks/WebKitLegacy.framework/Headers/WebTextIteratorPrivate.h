/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebTextIteratorPrivate : NSObject

{
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator>> _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16> _upconvertedText;
}

+ (void)initialize;

- (id).cxx_construct;

@end
