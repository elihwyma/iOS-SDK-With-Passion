/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, SFColor, SFLatLng;

@protocol SFPin <Swift>

@property (retain, nonatomic) SFLatLng *location;
@property (retain, nonatomic) SFColor *pinColor;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *resultID;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) int pinBehavior;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
