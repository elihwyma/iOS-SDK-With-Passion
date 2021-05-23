/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSDate, NSString, NSURL, UIViewController;

@protocol PXCMMSuggestion;

@interface PXMessagesExtensionViewModel : PXObservable

{
    _Bool _drawerActive;
    id <PXCMMSuggestion> _selectedSuggestion;
    NSURL *_selectedURL;
    unsigned long long _selectedActivityType;
    NSString *_selectedMessageText;
    NSDate *_selectedMessageDate;
    UIViewController *_presentedViewController;
    NSArray *_recipients;
}

@property (nonatomic, readonly) id <PXCMMSuggestion> selectedSuggestion;
@property (nonatomic, readonly) NSURL *selectedURL;
@property (nonatomic, readonly) unsigned long long selectedActivityType;
@property (copy, nonatomic, readonly) NSString *selectedMessageText;
@property (nonatomic, readonly) NSDate *selectedMessageDate;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (copy, nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly, getter=isDrawerActive) _Bool drawerActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRootViewModel;

- (void)setRecipients:(id)arg1;
- (void)clearSelection;
- (void)setPresentedViewController:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setSelectedURL:(id)arg1;
- (id)mutableChangeObject;
- (void)setSelectedSuggestion:(id)arg1;
- (void)setSelectedActivityType:(unsigned long long)arg1;
- (void)setSelectedMessageText:(id)arg1;
- (void)setSelectedMessageDate:(id)arg1;
- (void)setDrawerActive:(_Bool)arg1;

@end
