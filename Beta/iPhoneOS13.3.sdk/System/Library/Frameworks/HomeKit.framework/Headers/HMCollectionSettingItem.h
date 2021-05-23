/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSUUID;

@protocol NSObject><NSCopying><NSSecureCoding;

@interface HMCollectionSettingItem : NSObject <Swift>

{
    NSUUID *_identifier;
    id <NSObject><NSCopying><NSSecureCoding> _value;
}

@property (copy, readonly) NSUUID *identifier;
@property (copy, readonly) id <NSObject><NSCopying><NSSecureCoding> value;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
