/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>

@class NSString;

@interface MapsSuggestionsShortcutAtMapItemDeduper : MapsSuggestionsBaseDeduper

{
    vector_8215e319 _types;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)isEnabled;

- (id).cxx_construct;
- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
- (id)initWithSacrificedTypes:(const vector_8215e319 *)arg1;

@end
