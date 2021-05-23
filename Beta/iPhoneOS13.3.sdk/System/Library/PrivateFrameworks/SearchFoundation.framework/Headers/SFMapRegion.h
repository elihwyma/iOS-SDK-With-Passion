/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFMapRegion : NSObject <Swift>

{
    struct {
        unsigned int southLat:1;
        unsigned int westLng:1;
        unsigned int northLat:1;
        unsigned int eastLng:1;
    } _has;
    double _southLat;
    double _westLng;
    double _northLat;
    double _eastLng;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double southLat;
@property (nonatomic) double westLng;
@property (nonatomic) double northLat;
@property (nonatomic) double eastLng;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasNorthLat;
- (_Bool)hasSouthLat;
- (_Bool)hasEastLng;
- (_Bool)hasWestLng;
- (id)initWithProtobuf:(id)arg1;

@end
