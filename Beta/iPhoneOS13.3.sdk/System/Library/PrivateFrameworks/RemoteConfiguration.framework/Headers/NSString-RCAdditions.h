/*
 Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

#import <NSString.h>

@interface NSString (RCAdditions)

@property (nonatomic, readonly) struct _NSRange range;

+ (id)rc_string:(CDUnknownBlockType)arg1;
+ (id)stringWithValue:(id)arg1;
+ (_Bool)rc_string:(id)arg1 isEqualToString:(id)arg2;

- (id)rc_numberFollowingString:(id)arg1;

@end
