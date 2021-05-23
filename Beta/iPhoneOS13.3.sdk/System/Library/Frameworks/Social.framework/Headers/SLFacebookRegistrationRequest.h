/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLFacebookRequest.h>

@class SLFacebookRegistrationInfo;

@interface SLFacebookRegistrationRequest : SLFacebookRequest

{
    SLFacebookRegistrationInfo *_registrationInfo;
}

- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)_urlEncodedString:(id)arg1;
- (id)_tokenSecret;
- (void)_prepareRequestForValidation;
- (id)_sha1HashForString:(id)arg1;
- (id)initWithRegistrationInfo:(id)arg1;

@end
