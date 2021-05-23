/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOAutocompleteSessionData, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletion : NSObject

{
    NSArray *_groups;
    GEOAutocompleteSessionData *_sessionData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *groups;
@property (nonatomic, readonly) GEOAutocompleteSessionData *sessionData;

- (id)initWithResponse:(id)arg1 traits:(id)arg2 sessionData:(id)arg3 mapItems:(id)arg4;

@end
