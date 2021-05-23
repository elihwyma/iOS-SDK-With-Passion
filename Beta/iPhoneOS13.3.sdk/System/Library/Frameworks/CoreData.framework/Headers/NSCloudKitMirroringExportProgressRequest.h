/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest

{
    NSSet *_objectIDsToFetch;
}

@property (copy, nonatomic) NSSet *objectIDsToFetch;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
