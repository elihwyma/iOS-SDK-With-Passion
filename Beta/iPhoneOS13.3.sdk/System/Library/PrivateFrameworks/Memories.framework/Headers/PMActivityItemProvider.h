/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIActivityItemProvider.h>

@class LPLinkMetadata, MiroMovie, NSObject, NSString, PHActivityProgressViewController, UIViewController, VEKProduction, VEKResult;

@protocol MiroPreventDismissalDelegate, OS_dispatch_semaphore, PMActivityItemProviderDelegate;

@interface PMActivityItemProvider : UIActivityItemProvider

{
    _Bool _debugDisableProgressUpdates;
    _Bool _userCancelled;
    id <PMActivityItemProviderDelegate> _delegate;
    id <MiroPreventDismissalDelegate> _preventDismissalDelegate;
    VEKProduction *_production;
    MiroMovie *_miroMovie;
    double _exportAspect;
    LPLinkMetadata *_shareHeaderMetadata;
    PHActivityProgressViewController *_progressController;
    NSString *_preset;
    NSString *_exportedFilePath;
    double _progress;
    NSObject<OS_dispatch_semaphore> *_readyToReturnItem;
    VEKResult *_result;
    NSString *_shareMetadataSummary;
    NSString *_shareMetadataTitle;
}

@property (retain, nonatomic) VEKProduction *production;
@property (retain, nonatomic) PHActivityProgressViewController *progressController;
@property (retain, nonatomic) NSString *preset;
@property (retain, nonatomic) NSString *exportedFilePath;
@property (nonatomic) double progress;
@property (nonatomic) _Bool userCancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *readyToReturnItem;
@property (retain, nonatomic) VEKResult *result;
@property (retain, nonatomic) NSString *shareMetadataSummary;
@property (retain, nonatomic) NSString *shareMetadataTitle;
@property (weak, nonatomic) id <PMActivityItemProviderDelegate> delegate;
@property (weak, nonatomic) id <MiroPreventDismissalDelegate> preventDismissalDelegate;
@property (weak, nonatomic) UIViewController *presenter;
@property (retain, nonatomic) MiroMovie *miroMovie;
@property (nonatomic) double exportAspect;
@property (retain, nonatomic) LPLinkMetadata *shareHeaderMetadata;

- (id)item;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (void)cancelExport;
- (id)_stringFromTimeInterval:(double)arg1;
- (void)_unloadVEKObjects;
- (void)beginExport;
- (id)initWithProduction:(id)arg1 result:(id)arg2;

@end
