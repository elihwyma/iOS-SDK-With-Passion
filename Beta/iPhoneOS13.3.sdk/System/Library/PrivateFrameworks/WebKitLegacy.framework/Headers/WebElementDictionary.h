/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSDictionary.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary

{
    struct HitTestResult *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    _Bool _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (void)dealloc;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)_title;
- (id)_isSelected;
- (id)_textContent;
- (id)initWithHitTestResult:(const struct HitTestResult *)arg1;
- (id)_domNode;
- (id)_webFrame;
- (id)_altDisplayString;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_spellingToolTip;
- (id)_absoluteLinkURL;
- (id)_targetWebFrame;
- (id)_titleDisplayString;
- (id)_isLiveLink;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (void)_fillCache;

@end
