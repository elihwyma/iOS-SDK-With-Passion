/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseTitleFormatter.h>

@class NSString;

@interface MapsSuggestionsShortcutTitleFormatter : MapsSuggestionsBaseTitleFormatter

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (_Bool)formatTitlesForEntry:(id)arg1 eta:(id)arg2;
- (_Bool)formatTitlesForEntry:(id)arg1 distance:(double)arg2 trafficString:(id)arg3;

@end
