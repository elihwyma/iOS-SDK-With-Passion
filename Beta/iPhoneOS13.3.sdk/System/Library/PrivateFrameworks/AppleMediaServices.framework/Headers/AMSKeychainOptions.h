/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AMSKeychainOptions : NSObject

{
    _Bool _regenerateKeys;
    NSString *_clientCertLabel;
    NSString *_intermediateCertLabel;
    NSString *_label;
    unsigned long long _purpose;
    unsigned long long _style;
    NSString *_prompt;
}

@property (copy, nonatomic) NSString *clientCertLabel;
@property (copy, nonatomic) NSString *intermediateCertLabel;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long purpose;
@property (nonatomic) _Bool regenerateKeys;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *prompt;

+ (unsigned long long)preferredAttestationStyle;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)optionsDictionary;
- (id)initWithOptionsDictionary:(id)arg1;
- (_Bool)_compareString:(id)arg1 withString:(id)arg2;

@end
