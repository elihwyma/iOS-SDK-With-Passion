/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOMapItemAttribution, NSArray, NSString;

@interface _MKMapItemAttribution : NSObject

{
    GEOMapItemAttribution *_geoAttribution;
}

@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSArray *attributionURLs;
@property (nonatomic, readonly) NSArray *attributionApps;
@property (nonatomic, readonly) _Bool requiresAttributionInCallout;
@property (nonatomic, readonly) _Bool shouldOpenInAppStore;

- (id)providerLogoImageForScale:(double)arg1;
- (id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(_Bool)arg3;
- (id)providerSnippetLogoImageForScale:(double)arg1;
- (id)initWithGEOMapItemAttribution:(id)arg1;

@end
