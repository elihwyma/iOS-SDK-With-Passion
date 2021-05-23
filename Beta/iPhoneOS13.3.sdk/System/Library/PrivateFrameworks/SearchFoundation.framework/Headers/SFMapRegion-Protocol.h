/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary;

@protocol SFMapRegion <Swift>

@property (nonatomic) double southLat;
@property (nonatomic) double westLng;
@property (nonatomic) double northLat;
@property (nonatomic) double eastLng;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
