/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject

{
    struct Token _quasarToken;
}

@property (nonatomic, readonly) struct Token quasarToken;
@property (copy, nonatomic, readonly) NSString *tokenName;
@property (nonatomic, readonly) double start;
@property (nonatomic, readonly) double end;
@property (nonatomic, readonly) double silenceStart;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) _Bool hasSpaceAfter;
@property (nonatomic, readonly) _Bool hasSpaceBefore;
@property (nonatomic, readonly) NSString *phoneSequence;
@property (nonatomic, readonly) NSString *ipaPhoneSequence;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)_initWithQuasarToken:(const struct Token *)arg1;
- (id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(_Bool)arg6 hasSpaceBefore:(_Bool)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9;

@end
