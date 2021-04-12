//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIViewController, WDExportManager;

__attribute__((visibility("hidden")))
@interface WDExportController : NSObject
{
    WDExportManager *_exportManager;
    NSUInteger _backgroundTask;
    NSUInteger _exportResult;
    NSURL *_exportFileURL;
    BOOL _isExporting;
    UIViewController *_exportPresentingViewController;
}

// - (void).cxx_destruct;
- (void)_cleanUpExport;
- (void)_shareExportFileAndCleanUp;
- (void)_beginExport;
- (void)verifyExportWithPresentingViewController:(id)arg1;
- (BOOL)exportInProgress;
- (id)initWithProfile:(id)arg1;

@end

