/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface PKActivityEvent : NSObject

{
    _Bool _unread;
    NSString *_eventType;
    NSString *_identifier;
    NSDate *_date;
}

@property (nonatomic, readonly) NSString *eventType;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, getter=isUnread) _Bool unread;

+ (id)eventsWithTransactions:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToActivityEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 date:(id)arg2 unread:(_Bool)arg3;

@end
