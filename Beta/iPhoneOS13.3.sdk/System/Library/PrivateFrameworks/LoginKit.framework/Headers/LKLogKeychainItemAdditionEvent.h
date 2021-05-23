/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <LoginKit/LKLogEvent.h>

@class NSString;

@interface LKLogKeychainItemAdditionEvent : LKLogEvent

{
    NSString *_keychainItemAdded;
}

@property (nonatomic, readonly) NSString *keychainItemAdded;

+ (id)eventFromLKLogEvent:(id)arg1;

- (id)dictionary;
- (void)setKeychainItemAdded:(id)arg1;

@end
