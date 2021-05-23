/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObject.h>

@class NSString;

@interface PHObjectPlaceholder : PHObject

{
    NSString *_localIdentifier;
    long long _assetMediaType;
}

@property long long assetMediaType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)localIdentifier;
- (id)initWithLocalIdentifier:(id)arg1;

@end
