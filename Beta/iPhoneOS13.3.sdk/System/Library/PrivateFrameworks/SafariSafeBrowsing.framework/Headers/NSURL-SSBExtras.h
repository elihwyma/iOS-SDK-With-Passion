/*
 Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

#import <Foundation/NSURL.h>

@interface NSURL (SSBExtras)

@property (nonatomic, readonly) _Bool ssb_hasUserInfo;
@property (nonatomic, readonly) _Bool ssb_isSafeURL;

@end
