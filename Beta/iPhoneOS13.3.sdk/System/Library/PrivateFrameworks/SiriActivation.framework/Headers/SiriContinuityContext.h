/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SiriContext.h>

@class AFRequestInfo, AFSpeechRequestOptions, NSDictionary, NSNumber;

@interface SiriContinuityContext : SiriContext

{
    NSNumber *_isTemporaryDevice;
    AFSpeechRequestOptions *_speechRequestOptions;
    AFRequestInfo *_requestInfo;
    NSDictionary *_userActivity;
}

@property (nonatomic, readonly) AFSpeechRequestOptions *speechRequestOptions;
@property (nonatomic, readonly) AFRequestInfo *requestInfo;
@property (nonatomic, readonly) NSDictionary *userActivity;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestInfo:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithSpeechRequestOptions:(id)arg1;
- (_Bool)isTemporaryDevice;

@end
