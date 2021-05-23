/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class MSPPinnedPlacesQuery, NSArray, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MapsSuggestionsMSPShortcutStorage : NSObject

{
    CDUnknownBlockType _changeHandler;
    _Bool _hasAttemptedLoadingContents;
    MSPPinnedPlacesQuery *_query;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_semaphore> *_containerLoadWait;
    NSArray *_cachedPlaces;
}

@property (retain, nonatomic) MSPPinnedPlacesQuery *query;
@property (nonatomic) _Bool hasAttemptedLoadingContents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *containerLoadWait;
@property (retain, nonatomic) NSArray *cachedPlaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)containerDidLoadFromPersister:(id)arg1;
- (void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2;
- (_Bool)addOrUpdateShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)removeShortcuts:(struct NSArray *)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcutToFront:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)moveShortcutToBack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
