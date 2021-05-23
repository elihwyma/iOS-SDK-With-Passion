/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate, NSString;

@interface HKSemanticDate : NSObject <Swift>

{
    NSString *_keyPath;
    NSDate *_date;
}

@property (copy, nonatomic, readonly) NSString *keyPath;
@property (copy, nonatomic, readonly) NSDate *date;

+ (_Bool)supportsSecureCoding;
+ (id)semanticDateWithKeyPath:(id)arg1 date:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 date:(id)arg2;

@end
