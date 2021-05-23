/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>

@class NSString;

@interface MapsSuggestionsGEOMapItemDeduper : MapsSuggestionsBaseDeduper

{
    long long _type;
    struct NSString *_name;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)isEnabled;

- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
- (id)initWithSacrificedType:(long long)arg1;

@end
