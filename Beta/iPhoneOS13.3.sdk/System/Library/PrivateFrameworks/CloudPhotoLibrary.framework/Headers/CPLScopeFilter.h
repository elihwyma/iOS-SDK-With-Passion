/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSSet;

@interface CPLScopeFilter : NSObject

{
    NSSet *_includedScopeIdentifiers;
    NSSet *_excludedScopeIdentifiers;
}

@property (nonatomic, readonly) NSSet *includedScopeIdentifiers;
@property (nonatomic, readonly) NSSet *excludedScopeIdentifiers;

- (id)description;
- (id)_setOfScopeIdentifiersFromEnumeration:(id)arg1;
- (id)initWithIncludedScopeIdentifiers:(id)arg1;
- (id)initWithExcludedScopeIdentifiers:(id)arg1;
- (_Bool)filterOnScopeIdentifier:(id)arg1;

@end
