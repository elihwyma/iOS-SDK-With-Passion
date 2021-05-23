/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@interface ADAdSpaceEventInfo : NSObject

{
    unsigned long long _screenfuls;
    unsigned long long _slotPosition;
    unsigned long long _reuseCount;
    long long _lastErrorCode;
}

@property (nonatomic) unsigned long long screenfuls;
@property (nonatomic) unsigned long long slotPosition;
@property (nonatomic) unsigned long long reuseCount;
@property (nonatomic) long long lastErrorCode;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientInfo:(id)arg1 reuseCount:(unsigned long long)arg2;

@end
