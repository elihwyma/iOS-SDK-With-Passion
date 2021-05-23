/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSSet, NSString;

@interface PLManagedKeyword : PLManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *shortcut;
@property (retain, nonatomic) NSSet *assetAttributes;

+ (id)entityName;
+ (id)keywordForTitle:(id)arg1 context:(id)arg2;
+ (id)keywordForUuid:(id)arg1 context:(id)arg2;

- (void)awakeFromInsert;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;

@end
