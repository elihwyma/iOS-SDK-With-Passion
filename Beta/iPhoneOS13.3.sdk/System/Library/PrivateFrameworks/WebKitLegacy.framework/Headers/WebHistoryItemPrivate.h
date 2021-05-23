/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebHistoryItemPrivate : NSObject

{
    struct RefPtr<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem>> _historyItem;
    double _lastVisitedTime;
    struct unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>, std::__1::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> _redirectURLs;
}

- (id).cxx_construct;

@end
