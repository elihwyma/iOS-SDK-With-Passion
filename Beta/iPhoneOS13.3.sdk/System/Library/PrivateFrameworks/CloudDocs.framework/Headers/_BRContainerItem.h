/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BRQueryItem.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _BRContainerItem : BRQueryItem

{
    NSString *_containerID;
    NSSet *_containerClientIDs;
    NSString *_localizedName;
}

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemIdentifier;
- (id)typeIdentifier;
- (id)filename;
- (id)displayName;
- (id)containerDisplayName;
- (id)parentItemIdentifier;
- (id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3;
- (unsigned long long)capabilities;
- (_Bool)fp_isContainer;
- (id)fp_cloudContainerIdentifier;
- (id)fp_cloudContainerClientBundleIdentifiers;

@end
