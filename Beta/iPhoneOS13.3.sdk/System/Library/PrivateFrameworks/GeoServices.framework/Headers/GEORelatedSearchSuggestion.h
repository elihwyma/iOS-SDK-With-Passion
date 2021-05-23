/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject

{
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSString *searchBarDisplayToken;

- (id)_suggestionEntryMetadata;
- (id)initWithPDRelatedSearchSuggestion:(id)arg1;

@end
