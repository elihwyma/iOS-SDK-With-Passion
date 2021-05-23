/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, PXMemoriesSpec, PXScrollViewController;

@protocol PXMemoriesFeedScrollFilterDelegate;

@interface PXMemoriesFeedScrollFilter : NSObject

{
    double _additionalContentThreshold;
    struct {
        _Bool respondsToShouldRequestAdditionalContent;
    } _delegateFlags;
    PXScrollViewController *_scrollViewController;
    PXMemoriesSpec *_spec;
    id <PXMemoriesFeedScrollFilterDelegate> _delegate;
    NSDate *__lastAdditionalContentRequestDate;
}

@property (retain, nonatomic, setter=_setLastAdditionalContentRequestDate:) NSDate *_lastAdditionalContentRequestDate;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (retain, nonatomic) PXMemoriesSpec *spec;
@property (weak, nonatomic) id <PXMemoriesFeedScrollFilterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewControllerDidScroll:(id)arg1;
- (id)initWithScrollViewController:(id)arg1;

@end
