/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSURLResponse.h>

@interface NSURLResponse (ResponseSuccessCategory)

- (id)metadata;
- (long long)responseCode;
- (_Bool)requiresAuthorization;
- (_Bool)successful;
- (_Bool)hasStatusCode:(long long)arg1;
- (id)responseValueForHeader:(id)arg1;

@end
