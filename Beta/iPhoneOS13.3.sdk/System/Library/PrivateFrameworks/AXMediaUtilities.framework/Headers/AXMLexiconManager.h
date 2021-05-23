/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AXMLexiconManager : NSObject

{
    NSMutableDictionary *_cachedLexicons;
}

- (id)init;
- (struct _LXLexicon *)_lexiconForLocale:(id)arg1 diagnostics:(id)arg2;
- (_Bool)lexiconExistsForLocale:(id)arg1 diagnostics:(id)arg2;
- (_Bool)textExistsInLexicon:(id)arg1 withLocale:(id)arg2 diagnostics:(id)arg3;
- (void *)_opaqueLexiconForLocale:(id)arg1 diagnostics:(id)arg2;

@end
