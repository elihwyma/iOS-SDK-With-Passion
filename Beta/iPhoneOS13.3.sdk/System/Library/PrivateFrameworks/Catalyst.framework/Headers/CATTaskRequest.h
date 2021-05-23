/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@interface CATTaskRequest : NSObject

{
    _Bool _handlesNotifications;
}

@property (nonatomic) _Bool handlesNotifications;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
