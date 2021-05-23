/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class MPUDataSource, MPUNotificationObserver;

@protocol MPUDataSourceControllerDelegate;

@interface MPUDataSourceController : NSObject

{
    _Bool _viewControllerIsVisible;
    _Bool _shouldReloadWhenViewControllerIsVisible;
    MPUDataSource *_dataSource;
    id <MPUDataSourceControllerDelegate> _delegate;
    MPUNotificationObserver *_willInvalidateObserver;
    MPUNotificationObserver *_didInvalidateObserver;
}

@property (retain, nonatomic) MPUNotificationObserver *willInvalidateObserver;
@property (retain, nonatomic) MPUNotificationObserver *didInvalidateObserver;
@property (nonatomic) _Bool viewControllerIsVisible;
@property (nonatomic) _Bool shouldReloadWhenViewControllerIsVisible;
@property (nonatomic, readonly) MPUDataSource *dataSource;
@property (weak, nonatomic) id <MPUDataSourceControllerDelegate> delegate;

- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (void)_didInvalidate;
- (void)_willInvalidate;
- (void)viewControllerDidAppear;
- (void)viewControllerDidDisappear;

@end
