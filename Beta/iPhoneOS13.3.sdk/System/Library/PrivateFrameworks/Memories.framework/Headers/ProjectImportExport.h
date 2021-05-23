/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ProjectImportExport : NSObject

{
    NSMutableArray *_exportedProjectList;
}

@property (retain) NSMutableArray *exportedProjectList;

+ (id)sharedInstance;

- (id)init;
- (void)refreshExportedProjectFileList;
- (_Bool)haveExportedProjectNamed:(id)arg1;
- (void)undeleteExportedProject:(id)arg1;
- (void)deleteExportedProject:(id)arg1;
- (void)deleteExportedProjectWithName:(id)arg1;

@end
