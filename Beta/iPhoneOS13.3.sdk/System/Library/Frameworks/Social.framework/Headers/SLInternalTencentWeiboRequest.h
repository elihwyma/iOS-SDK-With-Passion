/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLRequest.h>

@interface SLInternalTencentWeiboRequest : SLRequest

{
    _Bool _shouldSign;
}

@property _Bool shouldSign;

- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)signedTencentRequestFromRequest:(id)arg1;
- (void)_addAuthenticationParameters:(id)arg1;

@end
