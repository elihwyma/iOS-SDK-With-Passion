/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSString;

@interface HMSymptom : NSObject <Swift>

{
    long long _type;
    NSString *_localizedTitle;
}

@property (readonly) long long type;
@property (copy, readonly) NSString *localizedTitle;

+ (_Bool)supportsSecureCoding;
+ (id)symptomWithType:(long long)arg1;
+ (id)unarchive:(id)arg1;
+ (struct NSDictionary *)unarchiveSymptomDict:(id)arg1;
+ (id)archive:(id)arg1;
+ (id)archiveSymptomDict:(struct NSDictionary *)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;

@end
