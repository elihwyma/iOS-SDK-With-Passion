/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSData, NSDate, NSString, NSURL;

@interface HKFHIRResource : NSObject <Swift>

{
    NSString *_resourceType;
    NSString *_identifier;
    NSData *_data;
    NSURL *_sourceURL;
    NSDate *_lastUpdatedDate;
}

@property (copy, readonly) NSString *sourceString;
@property (copy, readonly) NSDate *lastUpdatedDate;
@property (copy, readonly) NSString *resourceType;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSData *data;
@property (copy, readonly) NSURL *sourceURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2 data:(id)arg3 sourceURL:(id)arg4 lastUpdatedDate:(id)arg5;

@end
