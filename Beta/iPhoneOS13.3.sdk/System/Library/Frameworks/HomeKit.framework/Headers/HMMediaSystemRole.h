/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@interface HMMediaSystemRole : NSObject <Swift>

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (_Bool)supportsSecureCoding;
+ (id)leftRole;
+ (id)rightRole;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)serialize;
- (id)initWithRole:(unsigned long long)arg1;

@end
