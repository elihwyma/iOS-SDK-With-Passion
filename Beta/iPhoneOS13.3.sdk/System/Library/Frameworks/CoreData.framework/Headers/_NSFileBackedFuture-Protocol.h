/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSURL, NSUUID;

@protocol _NSFileBackedFuture

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSUUID *UUID;

@end
