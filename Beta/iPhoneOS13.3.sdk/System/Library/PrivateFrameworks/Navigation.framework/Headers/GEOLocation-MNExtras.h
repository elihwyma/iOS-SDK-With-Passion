/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <GeoServices/GEOLocation.h>

@interface GEOLocation (MNExtras)

+ (id)locationWithCLLocation:(id)arg1 course:(double)arg2;

- (CDStruct_88736aa7)clientLocation;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithCLLocation:(id)arg1 useMatchInfo:(_Bool)arg2;
- (id)initWithCLLocation:(id)arg1 course:(double)arg2;

@end
