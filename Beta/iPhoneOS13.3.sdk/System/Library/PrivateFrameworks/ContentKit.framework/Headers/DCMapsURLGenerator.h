/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/DCURLGenerator.h>

@class DCMapsLink, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DCMapsURLGenerator : DCURLGenerator

{
    NSMutableDictionary *_queryDictionary;
    DCMapsLink *_mapsLink;
}

@property (nonatomic, readonly) NSMutableDictionary *queryDictionary;
@property (nonatomic, readonly) DCMapsLink *mapsLink;

+ (id)URLWithMapsLink:(id)arg1;

- (id)scheme;
- (id)host;
- (id)query;
- (id)path;
- (id)URL;
- (id)mapType;
- (void)populateQueryDictionary;
- (id)directionsMode;
- (id)initWithMapsLink:(id)arg1;
- (void)setString:(id)arg1 forQueryKey:(id)arg2;

@end
