/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@class NSDate, NSString, NSURL;

@protocol PFFile

@property (readonly) NSURL *url;
@property (readonly) NSString *path;
@property (readonly) NSString *fileName;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSDate *fileCreationDate;
@property (readonly) NSDate *fileModificationDate;
@property (readonly) NSString *fileExtension;
@property (readonly) _Bool isDirectory;
@property (readonly) NSString *UTI;

@end
