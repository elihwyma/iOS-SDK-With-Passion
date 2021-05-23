/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface TVRUIButtonEvent : NSObject

{
    NSDate *_timestamp;
    long long _buttonType;
    long long _eventType;
}

@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) long long buttonType;
@property (nonatomic, readonly) long long eventType;

+ (id)createButtonEvent:(long long)arg1 buttonType:(long long)arg2;

- (id)description;
- (id)_initWithButtonType:(long long)arg1 eventType:(long long)arg2;

@end
