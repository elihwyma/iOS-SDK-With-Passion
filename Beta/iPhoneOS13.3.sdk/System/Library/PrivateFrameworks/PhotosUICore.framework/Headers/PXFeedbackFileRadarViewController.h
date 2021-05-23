/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UINavigationController.h>

@interface PXFeedbackFileRadarViewController : UINavigationController

{
    unsigned long long _collectionType;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) unsigned long long collectionType;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (id)initWithCollectionType:(unsigned long long)arg1;
- (void)_handleUserCancel:(id)arg1;
- (void)_handleUserConfirmation;
- (void)_handleRadarFiledWithError:(id)arg1;
- (void)_handleCompletion;

@end
