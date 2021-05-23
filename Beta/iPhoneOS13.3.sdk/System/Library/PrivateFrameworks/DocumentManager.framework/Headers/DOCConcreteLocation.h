/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class FPItem, NSArray, NSString;

@interface DOCConcreteLocation : NSObject

{
    _Bool _needsToResolveHierarchy;
    _Bool _isFPV2;
    _Bool _canBeRestored;
    NSString *_originalSourceIdentifier;
    FPItem *_fileProviderItem;
    NSString *_promptText;
    NSString *_sourceIdentifier;
    NSString *_title;
    NSArray *_tags;
}

@property _Bool canBeRestored;
@property (copy) NSArray *tags;
@property (copy) NSString *originalSourceIdentifier;
@property (readonly) NSString *shortDescription;
@property (readonly) _Bool isRoot;
@property (retain) FPItem *fileProviderItem;
@property (copy) NSString *promptText;
@property (copy) NSString *sourceIdentifier;
@property (copy) NSString *title;
@property _Bool needsToResolveHierarchy;
@property _Bool isFPV2;

+ (_Bool)supportsSecureCoding;
+ (id)searchLocation;
+ (id)recentsLocation;
+ (id)recentDocumentsLocation;
+ (id)sharedItemsLocation;
+ (id)trashedItemsLocation;
+ (id)defaultLocation;
+ (id)defaultSaveLocation;
+ (id)iCloudDriveLocation;
+ (id)emptyLocation;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTags:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 fileProviderItem:(id)arg2;
- (id)placeholderLocation;
- (id)navigationItemTitlesForConfiguration:(id)arg1;

@end
