/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAvailabilityRequest.h>

@protocol PLResourceIdentity;

@interface PHResourceAvailabilityRequest : PHAvailabilityRequest

{
    id <PLResourceIdentity> _resourceIdentity;
}

@property (nonatomic, readonly) id <PLResourceIdentity> resourceIdentity;

- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)plistDictionary;
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 resourceIdentity:(id)arg3;

@end
