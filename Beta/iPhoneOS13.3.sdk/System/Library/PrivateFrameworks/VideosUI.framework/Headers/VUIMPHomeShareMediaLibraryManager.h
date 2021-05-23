/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, VUIMediaLibraryManager;

@protocol OS_dispatch_queue, VUIHomeShareMediaLibraryManagerDelegate;

__attribute__((visibility("hidden")))
@interface VUIMPHomeShareMediaLibraryManager : NSObject

{
    id <VUIHomeShareMediaLibraryManagerDelegate> _delegate;
    VUIMediaLibraryManager *_manager;
    NSMutableArray *_mutableHomeShareMediaLibraries;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
}

@property (weak, nonatomic) VUIMediaLibraryManager *manager;
@property (retain, nonatomic) NSMutableArray *mutableHomeShareMediaLibraries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <VUIHomeShareMediaLibraryManagerDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *homeShareMediaLibraries;

+ (id)_sharedMPMediaLibraries;

- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (void)beginDiscoveringMediaLibraries;
- (void)endDiscoveringMediaLibraries;
- (id)_homeShareMediaLibraries;
- (void)_handleAvailableMediaLibrariesDidChange:(id)arg1;
- (void)_updateMediaLibrariesWithSharedMPMediaLibraries:(id)arg1;
- (void)_notifyDelegateHomeShareMediaLibrariesDidUpdate:(id)arg1 withChangeSet:(id)arg2;

@end
