/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _SFPBUserActivityData <Swift>

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSArray *userInfos;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addUserInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)clearUserInfo;
- (unsigned short)userInfoCount;
- (unsigned short)userInfoAtIndex: /* Error: Ran out of types for this method. */;

@end
