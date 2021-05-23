/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class MKMapItem, NSArray, NSUUID;

@interface CPTrip : NSObject

{
    MKMapItem *_origin;
    MKMapItem *_destination;
    NSArray *_routeChoices;
    id _userInfo;
    NSUUID *_identifier;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic, readonly) MKMapItem *origin;
@property (nonatomic, readonly) MKMapItem *destination;
@property (copy, nonatomic, readonly) NSArray *routeChoices;
@property (retain, nonatomic) id userInfo;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrigin:(id)arg1 destination:(id)arg2 routeChoices:(id)arg3;

@end
