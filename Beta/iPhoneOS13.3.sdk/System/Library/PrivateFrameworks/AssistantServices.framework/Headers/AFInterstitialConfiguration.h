/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFInterstitialConfiguration : NSObject <Swift>

{
    _Bool _isVoiceTrigger;
    _Bool _isDucking;
    _Bool _isTwoShot;
    long long _style;
    NSString *_languageCode;
    long long _gender;
    NSString *_recordRoute;
    unsigned long long _speechEndHostTime;
}

@property (nonatomic, readonly) long long style;
@property (copy, nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) long long gender;
@property (copy, nonatomic, readonly) NSString *recordRoute;
@property (nonatomic, readonly) _Bool isVoiceTrigger;
@property (nonatomic, readonly) _Bool isDucking;
@property (nonatomic, readonly) _Bool isTwoShot;
@property (nonatomic, readonly) unsigned long long speechEndHostTime;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 recordRoute:(id)arg4 isVoiceTrigger:(_Bool)arg5 isDucking:(_Bool)arg6 isTwoShot:(_Bool)arg7 speechEndHostTime:(unsigned long long)arg8;

@end
