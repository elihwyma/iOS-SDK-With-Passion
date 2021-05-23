/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface ASDBetaAppDisplayNames : NSObject <Swift>

{
    NSDictionary *_localizedNames;
    NSString *_primaryLocale;
}

@property (copy) NSDictionary *localizedNames;
@property (copy) NSString *primaryLocale;

+ (_Bool)supportsSecureCoding;
+ (id)displayNameWithLocalizedNames:(id)arg1 andPrimaryLocale:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
