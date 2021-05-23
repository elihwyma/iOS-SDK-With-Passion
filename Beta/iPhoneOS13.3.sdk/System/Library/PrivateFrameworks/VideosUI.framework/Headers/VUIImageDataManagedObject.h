/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <CoreData/NSManagedObject.h>

@class NSData, VUIImageInfoManagedObject;

__attribute__((visibility("hidden")))
@interface VUIImageDataManagedObject : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) VUIImageInfoManagedObject *imageInfo;

+ (id)fetchRequest;

@end
