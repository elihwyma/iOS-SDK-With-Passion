/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSURL.h>

@interface NSURL (CRKProfileAdditions)

+ (id)crk_macOSProfileURL;
+ (id)crk_iOSPlaceholderProfileURL;
+ (id)crk_uniqueTemporaryDirectoryURL;
+ (id)crk_overriddenDescriptionForItems:(id)arg1 originalDescription:(id)arg2;
+ (id)crk_uniqueTemporaryFileURL;

- (id)crk_sharingDescription;
- (id)crk_stringByRemovingWWWPrefixFromString:(id)arg1;
- (id)crk_escapedPath;
- (_Bool)crk_isBundle;

@end
