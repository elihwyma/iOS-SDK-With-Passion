/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject

{
    struct GEOSessionID _analyticsShortSessionId;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
}

@property (nonatomic, readonly) GEOPDAutocompleteSessionData *autocompleteSessionData;

- (id)init;
- (id)updateWithAutoCompleteSessionData:(id)arg1;
- (id)initWithAutoCompleteSessionData:(id)arg1;

@end
