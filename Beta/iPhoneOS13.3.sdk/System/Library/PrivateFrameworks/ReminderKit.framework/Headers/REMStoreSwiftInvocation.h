/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString, REMFetchResultToken;

@interface REMStoreSwiftInvocation : NSObject <Swift>

{
    REMFetchResultToken *_fetchResultTokenToDiffAgainst;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) REMFetchResultToken *fetchResultTokenToDiffAgainst;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFetchResultTokenToDiffAgainst:(id)arg1;

@end
