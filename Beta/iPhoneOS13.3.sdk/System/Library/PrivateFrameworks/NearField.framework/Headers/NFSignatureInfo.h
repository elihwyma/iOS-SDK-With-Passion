/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NFSignatureInfo : NSObject

{
    NSString *_rsaCert;
    NSString *_eccCert;
    NSString *_eckaCert;
    NSString *_seid;
    NSString *_platformId;
    NSString *_jsblCounter;
    unsigned long long _certificateVersion;
}

@property (nonatomic, readonly) NSString *rsaCert;
@property (nonatomic, readonly) NSString *eccCert;
@property (nonatomic, readonly) NSString *eckaCert;
@property (nonatomic, readonly) NSString *seid;
@property (nonatomic, readonly) NSString *platformId;
@property (nonatomic, readonly) NSString *jsblCounter;
@property (nonatomic, readonly) unsigned long long certificateVersion;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
