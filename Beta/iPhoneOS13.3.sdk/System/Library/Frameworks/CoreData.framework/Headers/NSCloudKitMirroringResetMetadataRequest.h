/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringResetMetadataRequest : NSCloudKitMirroringRequest

{
    NSSet *_objectIDsToReset;
}

@property (copy, nonatomic) NSSet *objectIDsToReset;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
