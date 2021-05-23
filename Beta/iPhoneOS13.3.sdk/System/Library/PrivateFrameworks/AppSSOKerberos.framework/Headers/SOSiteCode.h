/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SOSiteCode : NSObject

{
    NSString *_code;
    NSDate *_timeStamp;
    NSString *_networkFingerprint;
}

@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSDate *timeStamp;
@property (nonatomic, readonly) NSString *networkFingerprint;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)age;
- (id)initWithSiteCode:(id)arg1 forNetworkFingerprint:(id)arg2;

@end
