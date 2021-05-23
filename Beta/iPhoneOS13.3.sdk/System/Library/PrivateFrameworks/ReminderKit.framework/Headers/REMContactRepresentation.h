/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray;

@interface REMContactRepresentation : NSObject <Swift>

{
    NSArray *_phones;
    NSArray *_emails;
}

@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSArray *emails;

+ (_Bool)supportsSecureCoding;
+ (id)representationFromData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)archivedData;
- (id)initWithPhones:(id)arg1 emails:(id)arg2;
- (_Bool)matchesContactRepresentation:(id)arg1;

@end
