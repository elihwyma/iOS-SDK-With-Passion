/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSString;

@interface SFAccessControlEntry : NSObject <Swift>

{
    id _accessControlEntryInternal;
}

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic, getter=isOwner) _Bool owner;
@property (nonatomic) _Bool canRead;
@property (nonatomic) _Bool canWrite;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 owner:(_Bool)arg2 canRead:(_Bool)arg3 canWrite:(_Bool)arg4;

@end
