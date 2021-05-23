/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLLocalDataSource : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_localSourceDataPath;
+ (id)_relativePathForAccount:(id)arg1 migrator:(id)arg2;
+ (id)_relativePathForSummary:(id)arg1 migrator:(id)arg2;
+ (_Bool)localDataExists;
+ (void)deleteLocalData;
+ (void)stashFileForSummary:(id)arg1 migrator:(id)arg2;
+ (void)stashData:(id)arg1 forSummary:(id)arg2 migrator:(id)arg3;

- (void)dataForSummary:(id)arg1 migrator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountsDataForMigrator:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)summariesDataForAccount:(id)arg1 migrator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fileForSummary:(id)arg1 migrator:(id)arg2 fileAccessor:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataSegmentForSummary:(id)arg1 byteRange:(struct _NSRange)arg2 migrator:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateUIWithProgress:(double)arg1 logString:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
