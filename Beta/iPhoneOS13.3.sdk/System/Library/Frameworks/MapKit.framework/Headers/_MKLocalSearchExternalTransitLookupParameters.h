/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, NSString;

@interface _MKLocalSearchExternalTransitLookupParameters : NSObject

{
    NSArray *_stationCodes;
    NSString *_sourceIdentifier;
    NSDate *_transactionDate;
    CLLocation *_transactionLocation;
}

@property (copy, nonatomic) NSArray *stationCodes;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSDate *transactionDate;
@property (retain, nonatomic) CLLocation *transactionLocation;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
