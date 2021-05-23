/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSURL.h>

@interface NSURL (BLLibraryUtilityAdditions)

- (_Bool)isUploaded;
- (_Bool)isUploading;
- (_Bool)hasUnresolvedConflicts;
- (id)identifierFromPermlink;
- (_Bool)bl_boolFromResourceValue:(id)arg1;
- (_Bool)bl_isDownloadedWithResourceValue:(id)arg1;
- (_Bool)bl_isUbiquitous;
- (_Bool)bl_isDownloaded;
- (_Bool)bl_isDownloading;
- (_Bool)bl_isUbiquitousPromise;

@end
