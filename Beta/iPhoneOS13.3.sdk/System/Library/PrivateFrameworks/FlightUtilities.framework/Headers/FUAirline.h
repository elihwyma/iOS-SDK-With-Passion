/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface FUAirline : NSObject

{
    NSString *_IATACode;
    NSString *_FAACode;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_URL;
}

@property (retain) NSString *IATACode;
@property (retain) NSString *FAACode;
@property (retain) NSString *name;
@property (retain) NSString *phoneNumber;
@property (retain) NSURL *URL;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
