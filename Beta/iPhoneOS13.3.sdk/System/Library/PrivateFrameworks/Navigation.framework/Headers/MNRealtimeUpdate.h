/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSUUID;

@interface MNRealtimeUpdate : NSObject

{
    NSUUID *_routeID;
    NSDate *_lastUpdated;
    NSError *_error;
}

@property (nonatomic, readonly) NSUUID *routeID;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
