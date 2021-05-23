/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HAPAccessoryInfo : HMFObject

{
    _Bool _authenticated;
    NSString *_name;
    NSString *_modelName;
    NSString *_manufacturer;
    NSNumber *_category;
    NSString *_certificationStatus;
    NSString *_blacklisted;
    NSString *_ppid;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSNumber *category;
@property (nonatomic, readonly) NSString *certificationStatus;
@property (nonatomic, readonly) NSString *blacklisted;
@property (nonatomic, readonly) NSString *ppid;
@property (nonatomic, readonly) _Bool authenticated;

- (id)description;
- (_Bool)isBlacklisted;
- (id)initWithName:(id)arg1 manufacturer:(id)arg2 modelName:(id)arg3 category:(id)arg4 certificationStatus:(id)arg5 blacklisted:(id)arg6 ppid:(id)arg7;
- (_Bool)isCertified;

@end
