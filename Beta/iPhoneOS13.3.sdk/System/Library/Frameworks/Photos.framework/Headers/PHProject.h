/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@class NSData, NSString;

@interface PHProject : PHAssetCollection

{
    NSData *_projectExtensionData;
    NSString *_projectExtensionIdentifier;
    NSString *_projectDocumentType;
    NSString *_projectRenderUuid;
}

@property (nonatomic, readonly) NSData *projectData;
@property (nonatomic, readonly) NSString *projectExtensionIdentifier;
@property (nonatomic, readonly) NSString *projectDocumentType;
@property (nonatomic, readonly) NSString *projectRenderUuid;
@property (nonatomic, readonly) NSData *projectExtensionData;
@property (nonatomic, readonly) _Bool hasProjectPreview;

+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (_Bool)managedObjectSupportsPendingState;
+ (_Bool)managedObjectSupportsRejectedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchProjectsWithOptions:(id)arg1;
+ (id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2;

- (_Bool)canPerformEditOperation:(long long)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (_Bool)canContainCustomKeyAssets;

@end
