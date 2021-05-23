/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CSVoiceTriggerRTModel : NSObject

{
    NSData *_modelData;
    NSString *_modelLocale;
    NSString *_modelHash;
    NSData *_digest;
    NSData *_signature;
    NSData *_certificate;
}

@property (nonatomic, readonly) NSData *modelData;
@property (nonatomic, readonly) NSString *modelLocale;
@property (nonatomic, readonly) NSString *modelHash;
@property (nonatomic, readonly) NSData *digest;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) NSData *certificate;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)builtInRTModelDictionary;
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3;
- (id)initWithData:(id)arg1 hash:(id)arg2 locale:(id)arg3 digest:(id)arg4 signature:(id)arg5 certificate:(id)arg6;
- (id)initWithHash:(id)arg1 locale:(id)arg2;

@end
