/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ProjectImportExportUtils : NSObject

+ (unsigned int)getTrailingCount:(id)arg1 delim:(id)arg2 range:(struct _NSRange *)arg3;
+ (id)incrementTrailingCount:(id)arg1 delim:(id)arg2;
+ (_Bool)doesProjectFileExistForProject:(id)arg1;
+ (id)makeUniquePath:(id)arg1 delimiter:(id)arg2;
+ (_Bool)isValidProjectName:(id)arg1;
+ (id)exportPathForProject:(id)arg1;
+ (void)reconnectSharedMediaToProject:(id)arg1 usingDatemap:(id)arg2;

@end
