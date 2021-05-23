/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOEnvironmentInfo.h>

@class NSMapTable, NSString;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo

{
    NSMapTable *_overrideURLs;
    NSString *_uuid;
}

- (_Bool)isActive;
- (id)dictionaryRepresentation;
- (void)save;
- (void)delete;
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;
- (void)makeActive;
- (void)updateWithURLs:(id)arg1;
- (id)overrideURLs;

@end
