/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSArray, NSString, NSURL;

@interface DMFBookmark : NSObject

{
    NSString *_name;
    NSURL *_URL;
    NSArray *_children;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly, getter=isFolder) _Bool folder;
@property (nonatomic, readonly, getter=isFavoritesFolder) _Bool favoritesFolder;
@property (nonatomic, readonly, getter=isReadingListFolder) _Bool readingListFolder;

+ (_Bool)supportsSecureCoding;
+ (id)folderWithName:(id)arg1 children:(id)arg2 identifier:(id)arg3;
+ (id)favoritesFolderWithChildren:(id)arg1;
+ (id)readingListFolderWithChildren:(id)arg1;
+ (id)folderWithName:(id)arg1 children:(id)arg2;
+ (id)leafBookmarkWithName:(id)arg1 URL:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4;
- (_Bool)_isFolderWithIdentifier:(id)arg1;

@end
