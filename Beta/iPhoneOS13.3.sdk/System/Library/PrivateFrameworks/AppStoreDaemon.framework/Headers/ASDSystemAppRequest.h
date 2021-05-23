/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDPersistentRequest.h>

@class NSNumber, NSString;

@interface ASDSystemAppRequest : ASDPersistentRequest

{
    _Bool _userInitiated;
    NSString *_bundleID;
    NSNumber *_storeItemID;
}

@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic) NSNumber *storeItemID;
@property (nonatomic, getter=isUserInitiated) _Bool userInitiated;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1;

@end
