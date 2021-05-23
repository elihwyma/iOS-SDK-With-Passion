/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSString, NSUUID;

@interface WFTaskIdentifier : NSObject <Swift>

{
    int _pid;
    NSUUID *_UUID;
    NSString *_processName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) int pid;

+ (_Bool)supportsSecureCoding;
+ (id)defaultIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
