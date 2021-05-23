/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>

@class NSString;

@interface MapsSuggestionsBlockDeduper : MapsSuggestionsBaseDeduper

{
    CDUnknownBlockType _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

+ (_Bool)isEnabled;
+ (id)deduperWithBlock:(CDUnknownBlockType)arg1;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;

@end
