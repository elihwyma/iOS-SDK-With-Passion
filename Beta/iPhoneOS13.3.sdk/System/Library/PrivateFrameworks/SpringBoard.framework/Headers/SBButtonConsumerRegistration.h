/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBButtonConsumerClient;

@interface SBButtonConsumerRegistration : NSObject

{
    SBButtonConsumerClient *_client;
    long long _buttonKind;
    unsigned long long _eventMask;
    long long _eventPriority;
}

@property (weak, nonatomic) SBButtonConsumerClient *client;
@property (nonatomic) long long buttonKind;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long eventPriority;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
