/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <CoreData/NSManagedObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface Face : NSManagedObject

@property (retain, nonatomic) NSData *facePrintBlob;

+ (id)fetchRequest;

@end
