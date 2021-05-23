/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface LKLogEvent : NSObject

{
    NSString *_process;
    NSDate *_date;
    NSString *_senderImagePath;
    NSString *_composedMessage;
    unsigned long long _activityIdentifier;
}

@property (nonatomic, readonly) NSString *process;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *senderImagePath;
@property (nonatomic, readonly) NSString *composedMessage;
@property (nonatomic, readonly) unsigned long long activityIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (void)setDate:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)setActivityIdentifier:(unsigned long long)arg1;
- (_Bool)loggedByFramework:(id)arg1;
- (_Bool)loggedByProcess:(id)arg1;
- (_Bool)containsMessage:(id)arg1;
- (void)setComposedMessage:(id)arg1;
- (void)setSenderImagePath:(id)arg1;

@end
