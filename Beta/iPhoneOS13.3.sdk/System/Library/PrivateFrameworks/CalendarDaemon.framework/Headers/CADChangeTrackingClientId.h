/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CADChangeTrackingClientId : NSObject

{
    NSString *_suffix;
    NSString *_customClientId;
}

@property (nonatomic, readonly) NSString *suffix;
@property (nonatomic, readonly) NSString *customClientId;
@property (nonatomic, readonly) _Bool hasCustomClientId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)clientId;
- (id)initWithSuffix:(id)arg1;
- (id)initWithCustomClientId:(id)arg1;
- (_Bool)isEqualToChangeTrackingClientId:(id)arg1;
- (id)clientIdWithBundleId:(id)arg1;

@end
