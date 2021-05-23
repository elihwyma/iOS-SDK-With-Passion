/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessoryCategory, NSNumber, NSString, NSURL;

@interface HMSetupAccessoryPayload : NSObject <Swift>

{
    _Bool _supportsIP;
    _Bool _supportsWAC;
    _Bool _supportsBTLE;
    _Bool _paired;
    NSString *_accessoryName;
    NSString *_setupCode;
    NSString *_setupID;
    NSNumber *_categoryNumber;
    NSNumber *_flags;
    NSURL *_setupPayloadURL;
}

@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSString *setupCode;
@property (retain, nonatomic) NSString *setupID;
@property (retain, nonatomic) NSNumber *categoryNumber;
@property (nonatomic) _Bool supportsIP;
@property (nonatomic) _Bool supportsWAC;
@property (nonatomic) _Bool supportsBTLE;
@property (nonatomic) _Bool paired;
@property (retain, nonatomic) NSNumber *flags;
@property (retain, nonatomic) NSURL *setupPayloadURL;
@property (nonatomic, readonly) HMAccessoryCategory *category;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupPayloadURL:(id)arg1 error:(id *)arg2;
- (id)_parseSetupPayload:(id)arg1;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupPayload:(id)arg1;

@end
