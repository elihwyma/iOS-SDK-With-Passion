/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDiagnosticsService.h>

@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService

+ (_Bool)isServiceAvailableForProviders:(id)arg1;

- (id)title;
- (_Bool)canProvideConsoleDescription;
- (id)consoleDescription;
- (_Bool)canProvideContextualViewController;
- (_Bool)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)contextualViewController;
- (id)_libraryStatDictionary;
- (id)_providerItemsSummary;
- (id)parseProviderItemsSummary:(id)arg1 error:(id *)arg2;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)tapToRadarURLWithTitle:(id)arg1 descriptionString:(id)arg2;
- (id)writeGraphData:(id)arg1 errorsList:(id)arg2;
- (id)writeGraphStatistics:(id)arg1 errorsList:(id)arg2;
- (id)writePeopleContactSuggestionsGraphStatistics:(id)arg1 errorsList:(id)arg2;
- (id)writeMemoriesSummary:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3;
- (id)writeLibraryStatistics:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3;
- (void)writeErrorsToErrorLog:(id)arg1;
- (id)diagnosticFilesForPeopleContactSuggestionWithError:(id *)arg1;
- (id)snapshotMemoriesRelatedResults:(id)arg1 error:(id *)arg2;

@end
