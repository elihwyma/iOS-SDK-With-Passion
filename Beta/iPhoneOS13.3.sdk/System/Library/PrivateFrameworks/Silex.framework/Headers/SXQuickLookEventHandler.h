/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXQuickLookEventHandlerDelegate, SXQuickLookInteractor, SXQuickLookRouter;

@interface SXQuickLookEventHandler : NSObject

{
    id <SXQuickLookEventHandlerDelegate> delegate;
    id <SXQuickLookInteractor> _interactor;
    id <SXQuickLookRouter> _router;
}

@property (nonatomic, readonly) id <SXQuickLookInteractor> interactor;
@property (nonatomic, readonly) id <SXQuickLookRouter> router;
@property (weak, nonatomic) id <SXQuickLookEventHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didLoadThumbnail:(id)arg1;
- (void)failedToLoadThumbnail;
- (void)requestThumbnailWithSize:(struct CGSize)arg1;
- (void)didTapThumbnailView:(id)arg1;
- (id)initWithInteractor:(id)arg1 router:(id)arg2;

@end
