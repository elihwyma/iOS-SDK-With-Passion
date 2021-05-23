/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DACPLogShared : NSObject

{
    NSMutableDictionary *_UUIDToFileMap;
}

+ (id)shared;

- (id)init;
- (id)_getUUIDForFolder:(id)arg1 baseName:(id)arg2;
- (_Bool)_logData:(id)arg1 UUID:(id)arg2 startNewFile:(_Bool)arg3 sizeCheck:(long long)arg4 wantsCompressed:(_Bool)arg5 maxFileCount:(long long)arg6 outDidCreateNewFile:(_Bool *)arg7 outNewFilePath:(id *)arg8;
- (_Bool)_slurpToFileUUID:(id)arg1 slurpeeFileDescriptor:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 startNewFile:(_Bool)arg5 sizeCheck:(long long)arg6 wantsCompressed:(_Bool)arg7 maxLogFileCount:(int)arg8 outDidCreateNewFile:(_Bool *)arg9 outNewFilePath:(id *)arg10;
- (_Bool)_array:(id)arg1 beginsWithArray:(id)arg2 outRemainingArray:(id *)arg3;

@end
