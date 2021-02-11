/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAudioStreamCodecConfiguration : NSObject <NSCopying> {
    HMDAudioStreamCodecParameters * _codecParameters;
    HMDAudioStreamCodecType * _codecType;
}

@property (nonatomic, retain) HMDAudioStreamCodecParameters *codecParameters;
@property (nonatomic, retain) HMDAudioStreamCodecType *codecType;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)codecParameters;
- (id)codecType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithCodecType:(id)arg1 codecParameters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setCodecParameters:(id)arg1;
- (void)setCodecType:(id)arg1;

@end