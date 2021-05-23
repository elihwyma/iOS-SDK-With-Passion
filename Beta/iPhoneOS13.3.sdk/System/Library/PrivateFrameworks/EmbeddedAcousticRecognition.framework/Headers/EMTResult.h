/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray, NSLocale, NSString;

@interface EMTResult : NSObject

{
    _Bool _lowConfidence;
    float _confidence;
    NSLocale *_locale;
    NSArray *_tokens;
    NSString *_metaInfo;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) _Bool lowConfidence;
@property (nonatomic, readonly) NSString *metaInfo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(_Bool)arg4 metaInfo:(id)arg5;

@end
