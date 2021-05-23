/*
 Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CUTAdditions)

- (_Bool)_cutIsPathOnMissingVolume:(id)arg1;
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;

@end
