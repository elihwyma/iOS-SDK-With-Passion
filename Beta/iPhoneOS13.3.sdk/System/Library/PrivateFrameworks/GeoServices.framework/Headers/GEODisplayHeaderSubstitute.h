/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDDisplayHeaderSubstitute, GEORelatedSearchSuggestion, NSString;

@interface GEODisplayHeaderSubstitute : NSObject

{
    GEOPDDisplayHeaderSubstitute *_displayHeaderSubstitute;
    GEORelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property (retain, nonatomic) GEOPDDisplayHeaderSubstitute *displayHeaderSubstitute;
@property (retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion;
@property (nonatomic, readonly) int substituteType;
@property (nonatomic, readonly) NSString *interpretedQuery;

- (id)initWithPDDisplayHeaderSubstitute:(id)arg1;

@end
