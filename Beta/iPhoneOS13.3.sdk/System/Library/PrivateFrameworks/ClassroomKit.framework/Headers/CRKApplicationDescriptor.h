/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSString;

@interface CRKApplicationDescriptor : NSObject <Swift>

{
    _Bool _includeIcon;
    _Bool _includeBadgeIcon;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool includeIcon;
@property (nonatomic, readonly) _Bool includeBadgeIcon;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 includeIcon:(_Bool)arg2 includeBadgeIcon:(_Bool)arg3;
- (_Bool)isEqualToApplicationDescriptor:(id)arg1;

@end
