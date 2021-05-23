/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ASTIdentity : NSObject

{
    NSArray *_aliases;
    NSArray *_json;
    NSString *_hostAppVersion;
    NSString *_hostAppBuild;
}

@property (nonatomic, readonly) NSString *userAgent;
@property (retain, nonatomic) NSArray *aliases;
@property (retain, nonatomic) NSArray *json;
@property (retain, nonatomic) NSString *hostAppVersion;
@property (retain, nonatomic) NSString *hostAppBuild;

+ (_Bool)supportsSecureCoding;
+ (id)identityWithIdentityAliases:(id)arg1;
+ (id)identityWithSerialNumber:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityAliases:(id)arg1;
- (id)_dictionariesFromIdentityAliases:(id)arg1;

@end
