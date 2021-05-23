/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@interface REMListSortDescriptor : NSObject <Swift>

{
    _Bool _ascending;
    long long _type;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) _Bool ascending;

+ (_Bool)supportsSecureCoding;
+ (id)sortDescriptorSortingByNameAscending:(_Bool)arg1;
+ (id)sortDescriptorSortingByOrderingInAccountAscending:(_Bool)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(_Bool)arg2;

@end
