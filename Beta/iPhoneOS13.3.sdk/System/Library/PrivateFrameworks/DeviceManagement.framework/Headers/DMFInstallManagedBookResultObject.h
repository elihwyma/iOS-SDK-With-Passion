/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <Catalyst/CATTaskResultObject.h>

@class DMFBook;

@interface DMFInstallManagedBookResultObject : CATTaskResultObject

{
    DMFBook *_book;
}

@property (copy, nonatomic, readonly) DMFBook *book;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBook:(id)arg1;

@end
