/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject

{
    GEOSearchAttributionInfo *_info;
    NSArray *_attributionURLs;
    NSString *_yelpID;
    NSString *_poiID;
}

@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSArray *attributionURLs;
@property (nonatomic, readonly) NSArray *attributionApps;
@property (nonatomic, readonly) NSString *webBaseActionURL;
@property (nonatomic, readonly) _Bool shouldOpenInAppStore;
@property (nonatomic, readonly) _Bool requiresAttributionInCallout;

+ (id)attributionWithDataAttribution:(id)arg1 searchInfo:(id)arg2 class:(Class)arg3;

- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;
- (id)providerLogoPathForScale:(double)arg1;
- (id)providerSnippetLogoPathForScale:(double)arg1;
- (id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(_Bool)arg3;

@end
