/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class BRCAppLibrary, BRCItemID, BRCServerItem, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingPCSChainFolderOperation : _BRCFrameworkOperation

{
    BRCServerItem *_serverItem;
    BRCAppLibrary *_appLibrary;
}

@property (nonatomic, readonly) BRCItemID *rootItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithItem:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (void)_performPCSChainBatch;

@end
