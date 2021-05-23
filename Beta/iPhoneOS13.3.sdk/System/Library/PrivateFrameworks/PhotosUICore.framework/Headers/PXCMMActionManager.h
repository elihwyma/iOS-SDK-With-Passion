/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionManager : NSObject

{
    id <PXCMMActionPerformerDelegate> _performerDelegate;
    NSMutableDictionary *_performerClassByType;
}

@property (nonatomic, readonly) NSMutableDictionary *performerClassByType;
@property (weak, nonatomic) id <PXCMMActionPerformerDelegate> performerDelegate;

- (id)init;
- (id)actionPerformerForActionType:(id)arg1;
- (id)publishActionPerformer;
- (id)messageComposeActionPerformer;
- (id)photosPickerActionPerformer;
- (id)sendBackActionPerformer;
- (Class)actionPerformerClassForActionType:(id)arg1;

@end
