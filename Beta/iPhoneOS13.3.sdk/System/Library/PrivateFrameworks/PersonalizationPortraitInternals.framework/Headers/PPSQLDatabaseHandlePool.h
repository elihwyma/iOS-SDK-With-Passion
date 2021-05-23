/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _PASSqliteDatabase;

@interface PPSQLDatabaseHandlePool : NSObject

{
    _PASSqliteDatabase *readWriteHandle;
    NSMutableArray *availableReadOnlyHandles;
    unsigned long long totalReadOnlyHandles;
}

@end
