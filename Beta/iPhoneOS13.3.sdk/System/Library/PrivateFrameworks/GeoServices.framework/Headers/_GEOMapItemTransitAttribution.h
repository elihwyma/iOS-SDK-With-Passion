/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPDTransitAttribution, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitAttribution : NSObject

{
    GEOPDTransitAttribution *_transitAttribution;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_providerNames) NSArray *providerNames;

- (id)initWithTransitAttribution:(id)arg1;

@end
