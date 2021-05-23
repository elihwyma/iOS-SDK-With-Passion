/*
 Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

#import <Foundation/NSObject.h>

@class NSUserDefaults;

@interface NPHNanoRespondWithTextStore : NSObject

{
    NSUserDefaults *_userDefaults;
}

- (id)init;
- (unsigned long long)count;
- (id)customReplies;
- (id)defaultRepliesForLanguage:(id)arg1;
- (id)cannedRepliesForLanguage:(id)arg1;

@end
