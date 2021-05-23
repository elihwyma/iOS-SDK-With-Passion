/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSDate, TVRCButton;

@interface TVRCButtonEvent : NSObject

{
    NSDate *_timestamp;
    TVRCButton *_button;
    long long _eventType;
}

@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) TVRCButton *button;
@property (nonatomic, readonly) long long eventType;

+ (_Bool)supportsSecureCoding;
+ (id)buttonEventForButton:(id)arg1 eventType:(long long)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
