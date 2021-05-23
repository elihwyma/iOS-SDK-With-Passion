/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class BRCAccountSession, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCUploadAllFilesTrackerOperation : _BRCFrameworkOperation

{
    BRCAccountSession *_session;
    NSMutableArray *_zonesStillUploading;
    NSMutableArray *_hiddenZoneWithError;
    NSMutableDictionary *_perContainerIDError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (void)clientZone:(id)arg1 didFinishUploadingAllItemsWithError:(id)arg2;
- (id)initWithSession:(id)arg1 appLibraries:(id)arg2;

@end
