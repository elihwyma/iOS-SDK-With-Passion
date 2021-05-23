/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSString, NSUUID;

@interface HKOAuth2TokenSession : NSObject <Swift>

{
    NSString *_code;
    NSString *_query;
    NSUUID *_state;
}

@property (copy, nonatomic, readonly) NSString *code;
@property (copy, nonatomic, readonly) NSString *query;
@property (copy, nonatomic, readonly) NSUUID *state;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(id)arg1 query:(id)arg2 state:(id)arg3;

@end
