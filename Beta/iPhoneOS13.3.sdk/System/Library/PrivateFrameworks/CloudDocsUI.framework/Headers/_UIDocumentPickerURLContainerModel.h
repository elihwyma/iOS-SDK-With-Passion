/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <CloudDocsUI/_UIDocumentPickerContainerModel.h>

@class NSArray, NSOperationQueue, NSString, NSURL, _UIArrayController;

@protocol _UIDocumentPickerDirectoryObserver;

@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel

{
    double _startObservingTime;
    NSOperationQueue *_presentedItemOperationQueue;
    NSArray *_modelObjects;
    NSArray *_pickableTypes;
    unsigned long long _pickerMode;
    NSURL *_url;
    NSString *_displayTitle;
    struct _UIArrayController *_observer;
    id _urlObserver;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) _UIArrayController<_UIDocumentPickerDirectoryObserver> *observer;
@property (retain, nonatomic) NSArray *modelObjects;
@property (copy, nonatomic) NSArray *pickableTypes;
@property (nonatomic) unsigned long long pickerMode;
@property (retain, nonatomic) id urlObserver;
@property (copy, nonatomic) NSString *displayTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allTags;
+ (void)_tagColorsDidChange;
+ (id)tagColorsByTag;
+ (id)_tagBlipColors;

- (id)init;
- (void)dealloc;
- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;
- (id)scopes;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (void)startMonitoringChanges;
- (void)stopMonitoringChanges;
- (struct _UIArrayController *)_createObserver;
- (_Bool)afterInitialUpdate;
- (void)updateSortDescriptors;
- (void)refreshItem:(id)arg1 thumbnailOnly:(_Bool)arg2;
- (void)updateObserverForURL:(id)arg1;
- (void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2;
- (_Bool)shouldShowContainerForType:(id)arg1;
- (_Bool)shouldAllowPickingType:(id)arg1;
- (_Bool)shouldEnableContainer:(id)arg1;

@end
