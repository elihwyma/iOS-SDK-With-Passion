/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PTDomainInfo : NSObject

{
    NSString *_uniqueIdentifier;
    NSString *_domainGroupName;
    NSString *_domainName;
    NSString *_settingsClassName;
    NSString *_settingsBundlePath;
}

@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *domainGroupName;
@property (nonatomic, readonly) NSString *domainName;
@property (nonatomic, readonly) NSString *settingsClassName;
@property (nonatomic, readonly) NSString *settingsBundlePath;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1;

@end
