/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSData, NSManagedObjectContext, NSManagedObjectID;

@protocol PHResourceChooserAsset <Swift>

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) NSData *imageRequestHints;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) _Bool hasAdjustments;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContextForFetchingResources;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) _Bool isRAWPlusJPEG;
@property (nonatomic, readonly) unsigned long long originalResourceChoice;

@end
