/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/DCMapsURLGenerator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DCCityMapperURLGenerator : DCMapsURLGenerator

{
    NSString *_startCoordinate;
    NSString *_endCoordinate;
}

@property (retain, nonatomic) NSString *startCoordinate;
@property (retain, nonatomic) NSString *endCoordinate;

+ (void)generateURLWithMapsLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)scheme;
- (id)host;
- (id)path;
- (void)populateQueryDictionary;

@end
