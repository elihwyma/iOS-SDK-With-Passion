/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOAutocompleteSessionData, NSArray;

@protocol GEOCompletion <Swift>

@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) GEOAutocompleteSessionData *sessionData;

@end
