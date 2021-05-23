/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface SSVMediaSocialAdminStatus : NSObject

{
    _Bool _admin;
    NSDate *_dateUpdated;
}

@property (nonatomic, readonly) NSDate *dateUpdated;
@property (nonatomic, readonly, getter=isAdmin) _Bool admin;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdminStatus:(_Bool)arg1 dateUpdated:(id)arg2;

@end
