/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HMSettingValue : NSObject <Swift>

{
    long long _type;
    NSNumber *_numberValue;
    NSString *_stringValue;
    NSData *_dataValue;
    NSUUID *_selectionIdentifier;
    NSString *_selectionValue;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSNumber *numberValue;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (copy, nonatomic, readonly) NSData *dataValue;
@property (copy, nonatomic, readonly) NSUUID *selectionIdentifier;
@property (copy, nonatomic, readonly) NSString *selectionValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initDataSettingWithValue:(id)arg1;
- (id)initNumberSettingWithValue:(id)arg1;
- (id)initStringSettingWithValue:(id)arg1;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 selectionIdentifier:(id)arg5 selectionValue:(id)arg6;

@end
