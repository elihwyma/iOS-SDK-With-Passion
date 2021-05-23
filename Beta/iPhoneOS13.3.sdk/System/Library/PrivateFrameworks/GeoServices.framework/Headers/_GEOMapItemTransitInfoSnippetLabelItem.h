/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject

{
    unsigned long long _type;
    NSString *_labelString;
    id <GEOTransitArtworkDataSource> _labelArtwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> labelArtwork;

- (id)initWithType:(unsigned long long)arg1 labelString:(id)arg2 labelArtwork:(id)arg3;

@end
