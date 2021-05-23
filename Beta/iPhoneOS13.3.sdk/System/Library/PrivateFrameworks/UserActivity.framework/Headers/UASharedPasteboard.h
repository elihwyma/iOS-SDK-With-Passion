/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject

{
    UASharedPasteboardManager *_manager;
}

@property UASharedPasteboardManager *manager;

+ (void)initialize;
+ (void)clearLocalPasteboardInformation;
+ (void)startPreventingPasteboardSharing;
+ (void)stopPreventingPasteboardSharing;
+ (void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
+ (void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2;
+ (void)localPasteboardDidPasteGeneration:(unsigned long long)arg1;
+ (id)remotePasteboard;

- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)returnPasteboardDataBeforeArchives;
- (void)prefetchRemotePasteboardTypes:(id)arg1;

@end
