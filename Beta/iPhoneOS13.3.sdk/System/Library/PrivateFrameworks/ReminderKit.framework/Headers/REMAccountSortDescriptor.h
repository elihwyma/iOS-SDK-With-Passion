/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@interface REMAccountSortDescriptor : NSObject <Swift>

{
    _Bool _ascending;
    long long _type;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool ascending;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(_Bool)arg2;

@end
