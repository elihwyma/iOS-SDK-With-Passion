/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>

@class NSString;

@interface MapsSuggestionsNearbyFilter : MapsSuggestionsBaseFilter

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)isEnabled;

- (_Bool)shouldKeepEntry:(id)arg1;
- (id)_locationOfEntry:(id)arg1;

@end
