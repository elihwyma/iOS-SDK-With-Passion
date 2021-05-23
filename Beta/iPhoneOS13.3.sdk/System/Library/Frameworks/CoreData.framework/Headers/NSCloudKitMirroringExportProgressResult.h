/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult

{
    NSDictionary *_objectIDToLastExportedToken;
}

@property (nonatomic, readonly) NSDictionary *objectIDToLastExportedToken;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 objectIDToLastExportedToken:(id)arg2 error:(id)arg3;

@end
