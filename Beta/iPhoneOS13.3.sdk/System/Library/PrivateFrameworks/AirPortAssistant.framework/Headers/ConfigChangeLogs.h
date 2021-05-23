/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@interface ConfigChangeLogs : NSObject

+ (id)configChangeLogFilesIncludingAllKeys:(_Bool)arg1 orSpecificKeys:(id)arg2;
+ (id)configChangeLogFiles;
+ (int)writeConfigChangeLog:(struct _BaseStation *)arg1;

@end
