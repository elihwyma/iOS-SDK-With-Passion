/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>

@class NSString;

@interface MapsSuggestionsUniqueIdentifierDeduper : MapsSuggestionsBaseDeduper

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

- (id)initWithType:(long long)arg1;
- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;

@end
