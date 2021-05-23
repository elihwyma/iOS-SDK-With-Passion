/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSString;

@interface CPLContainerRelation : NSObject

{
    _Bool _keyAsset;
    NSString *_containerIdentifier;
    long long _position;
}

@property (copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) long long position;
@property (nonatomic, getter=isKeyAsset) _Bool keyAsset;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)proposedScopedIdentifierForItemScopedIdentifier:(id)arg1;
- (id)proposedIdentifierForItemIdentifier:(id)arg1;

@end
