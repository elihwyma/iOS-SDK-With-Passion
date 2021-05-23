/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEORelatedSearchSuggestion, NSString;

@interface GEOMapItemChildActionSearch : NSObject

{
    GEORelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property (retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion;
@property (nonatomic, readonly) NSString *displayString;

- (id)initWithChildActionSearch:(id)arg1;

@end
