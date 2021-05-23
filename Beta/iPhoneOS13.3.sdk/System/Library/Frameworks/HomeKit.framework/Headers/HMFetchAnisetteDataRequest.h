/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMRemoteLoginMessage.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMFetchAnisetteDataRequest : HMRemoteLoginMessage

{
    _Bool _shouldProvision;
}

@property (nonatomic) _Bool shouldProvision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *messageName;
@property (copy, nonatomic, readonly) NSString *xpcMessageName;
@property (nonatomic, readonly) NSDictionary *messagePayload;

+ (_Bool)supportsSecureCoding;
+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (id)xpcMessageName;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
