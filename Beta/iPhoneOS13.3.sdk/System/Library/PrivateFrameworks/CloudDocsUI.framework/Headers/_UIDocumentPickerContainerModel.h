/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerModel : NSObject

{
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    int _sortOrder;
    NSMutableArray *_updateHandlers;
    NSOperationQueue *_thumbnailQueue;
}

@property (retain, nonatomic) NSMutableArray *updateHandlers;
@property (retain, nonatomic) NSOperationQueue *thumbnailQueue;
@property (nonatomic, readonly) NSArray *modelObjects;
@property (copy, nonatomic, readonly) NSArray *pickableTypes;
@property (nonatomic, readonly) unsigned long long pickerMode;
@property (nonatomic) int sortOrder;
@property (nonatomic, readonly) _Bool afterInitialUpdate;

- (id)init;
- (void)dealloc;
- (id)displayTitle;
- (void)startMonitoringChanges;
- (void)stopMonitoringChanges;
- (void)updateSortDescriptors;
- (void)refreshItem:(id)arg1 thumbnailOnly:(_Bool)arg2;

@end
