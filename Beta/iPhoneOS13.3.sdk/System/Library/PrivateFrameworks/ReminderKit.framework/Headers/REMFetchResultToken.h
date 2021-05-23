/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSDictionary;

@interface REMFetchResultToken : NSObject <Swift>

{
    NSDictionary *_persistentHistoryTokens;
}

@property (nonatomic, readonly) NSDictionary *persistentHistoryTokens;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryTokens:(id)arg1;

@end
