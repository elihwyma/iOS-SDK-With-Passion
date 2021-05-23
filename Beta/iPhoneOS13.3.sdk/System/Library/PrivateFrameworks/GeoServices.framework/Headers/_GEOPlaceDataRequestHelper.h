/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataRequestHelper : NSObject

{
    CDUnknownBlockType _requestHandler;
    NSDictionary *_identifierOrderMap;
    NSMutableSet *_remaningIdentifiers;
    NSMutableArray *_results;
}

+ (id)helperForHandler:(CDUnknownBlockType)arg1 identifiers:(id)arg2;
+ (id)helperExpiredIdentifiers:(id)arg1;

- (id)description;
- (_Bool)finishedIdentifier:(id)arg1 withResult:(id)arg2 error:(id)arg3;

@end
