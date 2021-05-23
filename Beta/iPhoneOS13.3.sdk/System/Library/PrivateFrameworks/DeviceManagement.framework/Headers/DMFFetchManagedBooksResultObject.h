/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchManagedBooksResultObject : CATTaskResultObject

{
    NSArray *_books;
}

@property (copy, nonatomic, readonly) NSArray *books;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBooks:(id)arg1;

@end
