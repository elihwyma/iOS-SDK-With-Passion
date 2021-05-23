/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@class NSString;

@interface PHImportSession : PHAssetCollection

{
    NSString *_importSessionID;
}

@property (nonatomic, readonly) NSString *importSessionID;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchImportSessionsWithOptions:(id)arg1;

- (id)description;
- (id)localizedTitle;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end
