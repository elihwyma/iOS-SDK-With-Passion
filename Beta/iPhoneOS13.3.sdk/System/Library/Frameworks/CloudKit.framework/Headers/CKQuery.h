/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSArray, NSPredicate, NSString;

@interface CKQuery : NSObject

{
    NSString *_recordType;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
}

@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSArray *sortDescriptors;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2;
- (id)CKPropertiesDescription;

@end
