/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SKCloudServiceSetupConfiguration : NSObject

{
    _Bool _targetsFinanceApplication;
    _Bool _forPublicSDK;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *applicationVersion;
@property (nonatomic) _Bool targetsFinanceApplication;
@property (nonatomic) _Bool forPublicSDK;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
