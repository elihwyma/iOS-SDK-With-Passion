/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSURL, UIViewController, WDExportManager;

__attribute__((visibility("hidden")))
@interface WDExportController : NSObject

{
    WDExportManager *_exportManager;
    unsigned long long _backgroundTask;
    unsigned long long _exportResult;
    NSURL *_exportFileURL;
    _Bool _isExporting;
    UIViewController *_exportPresentingViewController;
}

- (id)initWithProfile:(id)arg1;
- (_Bool)exportInProgress;
- (void)verifyExportWithPresentingViewController:(id)arg1;
- (void)_beginExport;
- (void)_shareExportFileAndCleanUp;
- (void)_cleanUpExport;

@end
