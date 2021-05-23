/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLDiagnostics : NSObject

+ (id)diagnosticsURLs;
+ (id)logDirectoryURL;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)matchingNameExpression;
+ (id)excludingNameExpression;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)arg1 queue:(id)arg2 propertyListHandler:(CDUnknownBlockType)arg3;
+ (void)tapToRadarWithTitle:(id)arg1 description:(id)arg2;
+ (_Bool)shouldSuppressRadarUserNotificationWithMessage:(id)arg1 radarTitle:(id)arg2;
+ (void)fileRadarUserNotificationWithHeader:(id)arg1 message:(id)arg2 radarTitle:(id)arg3 radarDescription:(id)arg4;
+ (id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)arg1;
+ (id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)arg1;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)arg1;
+ (void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)collectCollectionsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)collectYearsStatWithLibraryContext:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
