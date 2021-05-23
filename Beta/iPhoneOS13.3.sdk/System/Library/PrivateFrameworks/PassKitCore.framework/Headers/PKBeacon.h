/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSNumber, NSString, NSUUID;

@interface PKBeacon : NSObject <Swift>

{
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
    NSString *_name;
    NSString *_relevantText;
}

@property (retain, nonatomic) NSUUID *proximityUUID;
@property (retain, nonatomic) NSNumber *major;
@property (retain, nonatomic) NSNumber *minor;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *relevantText;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setProximityUUIDWithString:(id)arg1;
- (id)proximityUUIDAsString;

@end
