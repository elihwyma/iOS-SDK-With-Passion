/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WBSParsecSubscriptionInfo : NSObject

{
    NSDate *_expirationDate;
    NSString *_type;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;

- (id)initWithString:(id)arg1;
- (id)_initWithDictionary:(id)arg1;

@end
