/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSCloudKitMirroringImportRequest, PFCloudKitImporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterWorkItem : NSObject

{
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
}

@property (nonatomic, readonly) PFCloudKitImporterOptions *options;
@property (nonatomic, readonly) NSCloudKitMirroringImportRequest *request;

- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2;
- (void)doWorkWithCompletion:(CDUnknownBlockType)arg1;

@end
