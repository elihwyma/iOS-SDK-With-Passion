/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class ICDeviceBrowser, NSHashTable, NSMutableDictionary, NSString;

@interface PHImportController : NSObject

{
    struct os_unfair_lock_s _sourceListLock;
    struct os_unfair_lock_s _importInProgressLock;
    _Bool _importInProgress;
    ICDeviceBrowser *_deviceBrowser;
    NSMutableDictionary *_importDeviceSources;
    NSHashTable *_observers;
    id _processInfoActivityToken;
}

@property (retain, nonatomic) ICDeviceBrowser *deviceBrowser;
@property (retain, nonatomic) NSMutableDictionary *importDeviceSources;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) _Bool importInProgress;
@property (retain, nonatomic) id processInfoActivityToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)importSourceForUrls:(id)arg1;

- (id)init;
- (void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(_Bool)arg3;
- (void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(_Bool)arg3;
- (void)addImportControllerObserver:(id)arg1;
- (_Bool)sourceIsConnected:(id)arg1;
- (id)importUrls:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3 atEnd:(CDUnknownBlockType)arg4;
- (void)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibraryAtURL:(id)arg3 withOptions:(id)arg4 progress:(id *)arg5 delegate:(id)arg6 performanceDelegate:(id)arg7 atEnd:(CDUnknownBlockType)arg8;
- (void)accessSourceList:(CDUnknownBlockType)arg1;
- (id)filterDuplicates:(id)arg1 onSource:(id)arg2 library:(id)arg3 options:(id)arg4 delegate:(id)arg5;
- (void)importStarting;
- (void)importEnding;
- (id)importUrls:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4 performanceDelegate:(id)arg5 atEnd:(CDUnknownBlockType)arg6;
- (void)importAssets:(id)arg1 fromImportSource:(id)arg2 withOptions:(id)arg3 progress:(id *)arg4 delegate:(id)arg5 atEnd:(CDUnknownBlockType)arg6;
- (void)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 progress:(id *)arg5 delegate:(id)arg6 performanceDelegate:(id)arg7 atEnd:(CDUnknownBlockType)arg8;

@end
