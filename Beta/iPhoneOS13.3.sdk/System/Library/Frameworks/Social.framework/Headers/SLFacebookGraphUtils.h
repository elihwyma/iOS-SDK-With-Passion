/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@interface SLFacebookGraphUtils : NSObject

+ (void)_likeURL:(id)arg1 requestMethod:(long long)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_parseServerResponse:(id)arg1 error:(id *)arg2;
+ (id)_likeQueryStringForURL:(id)arg1 flags:(unsigned long long)arg2;
+ (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)likeURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)unlikeURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
