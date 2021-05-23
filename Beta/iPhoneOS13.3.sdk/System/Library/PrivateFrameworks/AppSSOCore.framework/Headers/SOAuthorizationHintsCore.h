/*
 Image: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SOAuthorizationHintsCore : NSObject

{
    NSString *_localizedExtensionBundleDisplayName;
}

@property (nonatomic, readonly) NSString *localizedExtensionBundleDisplayName;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedExtensionBundleDisplayName:(id)arg1;

@end
