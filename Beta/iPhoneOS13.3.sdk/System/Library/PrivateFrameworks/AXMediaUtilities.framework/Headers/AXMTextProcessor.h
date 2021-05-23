/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMDataDetector, AXMLexiconManager, AXMSpeechFormatterCache, AXMSpellChecker, AXMTagger, NSDictionary, NSMutableDictionary;

@interface AXMTextProcessor : NSObject

{
    AXMSpellChecker *_spellChecker;
    AXMLexiconManager *_lexiconManager;
    AXMTagger *_tagger;
    AXMDataDetector *_dataDetector;
    AXMSpeechFormatterCache *_speechFormatterCache;
    NSDictionary *_globalWhitelistedWords;
    NSMutableDictionary *_localeWhitelistedWords;
}

- (id)init;
- (id)dataDetector;
- (id)lexiconManager;
- (id)tagger;
- (id)_preprocessText:(id)arg1 diagnostics:(id)arg2;
- (id)spellChecker;
- (id)processText:(id)arg1 withOperation:(id)arg2;

@end
