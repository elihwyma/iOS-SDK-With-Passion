/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMStylingArchiveManager.h>

@class NSDate, NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMProgressiveArchiveManager : CMStylingArchiveManager

{
    const void *mClient;
    CDStruct_ba543347 *mCallBacks;
    NSMutableDictionary *mDataCache;
    _Bool mMainDataInited;
    NSDate *mStartDate;
    NSDate *mLastCommitDate;
    NSMutableString *mHtmlLogString;
}

- (_Bool)isCancelled;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushCssToPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (_Bool)isProgressive;
- (id)initWithClient:(const void *)arg1 andCallBacks:(CDStruct_ba543347 *)arg2;

@end
