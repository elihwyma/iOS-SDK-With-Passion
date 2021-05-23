/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@interface AVCTextStreamConfig : NSObject

{
    long long _codecType;
    unsigned long long _numRedundantPayloads;
    unsigned long long _txRedPayloadType;
    unsigned long long _rxRedPayloadType;
    float _txIntervalMin;
}

@property (nonatomic) long long codecType;
@property (nonatomic) unsigned long long numRedundantPayloads;
@property (nonatomic) unsigned long long txRedPayloadType;
@property (nonatomic) unsigned long long rxRedPayloadType;
@property (nonatomic) float txIntervalMin;

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;

- (_Bool)isValid;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (_Bool)isRedValid;

@end
