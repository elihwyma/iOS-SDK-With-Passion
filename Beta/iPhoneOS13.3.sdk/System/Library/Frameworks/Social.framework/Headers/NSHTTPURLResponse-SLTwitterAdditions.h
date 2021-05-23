/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (SLTwitterAdditions)

+ (id)sl_twitterResponseObjectErrorCode:(id)arg1;
+ (id)sl_twitterErrorMessageFromResponseObject:(id)arg1;

- (int)sl_twitterResponseTypeFromResponseObject:(id)arg1 looseAuthFailureMatching:(_Bool)arg2;
- (int)sl_twitterResponseType:(id)arg1;

@end
