/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSURL.h>

@interface NSURL (CLSAdditions)

@property (nonatomic, readonly) _Bool cls_isUbiquitous;
@property (nonatomic, readonly) _Bool cls_isUploaded;
@property (nonatomic, readonly) _Bool cls_fileExists;

+ (id)cls_libraryURL;
+ (id)cls_documentsURL;
+ (id)cls_ubiquitousContainerURL;
+ (id)cls_configURL;
+ (id)cls_draftsURL;

- (id)cls_createDirectoryIfNeeded:(id *)arg1;
- (id)cls_pathRelativeToURL:(id)arg1;
- (_Bool)cls_isParentOfURL:(id)arg1;

@end
