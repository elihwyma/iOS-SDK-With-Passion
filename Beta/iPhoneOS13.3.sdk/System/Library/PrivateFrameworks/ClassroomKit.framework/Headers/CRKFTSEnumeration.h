/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKFTSEnumeration : NSObject

{
    NSString *mDirectoryPath;
    int mOptions;
}

+ (int)defaultOptions;

- (id)init;
- (id)initWithDirectoryPath:(id)arg1;
- (id)entriesWithError:(id *)arg1;
- (id)initWithDirectoryPath:(id)arg1 options:(int)arg2;
- (CDStruct_2263269c *)makeFTSWithError:(id *)arg1;
- (id)readAllEntriesFromFTS:(CDStruct_2263269c *)arg1 error:(id *)arg2;
- (void)closeFTS:(CDStruct_2263269c *)arg1;
- (id)readNextEntryFromFTS:(CDStruct_2263269c *)arg1 error:(id *)arg2;
- (_Bool)shouldSkipEntry:(struct _ftsent *)arg1;

@end
