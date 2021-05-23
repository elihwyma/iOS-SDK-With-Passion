/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <CFNetwork/NSHTTPURLResponse.h>

@class NSData, NSString;

@interface NSHTTPURLResponse (AMSAnisette)

@property (nonatomic, readonly) NSData *ams_actionData;
@property (nonatomic, readonly) NSData *ams_actionDataV1;
@property (nonatomic, readonly) NSData *ams_actionDataV1_5;
@property (nonatomic, readonly) NSString *ams_actionName;
@property (nonatomic, readonly) NSString *ams_actionNameV1;
@property (nonatomic, readonly) NSString *ams_actionNameV1_5;

- (long long)_anisetteType;

@end
