/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsRelevanceScoreProvider;

@interface MapsSuggestionsFwdGeocodingRelevanceScoreProvider : NSObject

{
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    id <MapsSuggestionsRelevanceScoreProvider> _wrappedScoreProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (_Bool)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)preLoad;
- (id)initDecoratingRelevanceScoreProvider:(id)arg1 networkRequester:(id)arg2;

@end
