/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject

{
    AVMediaSelectionInternal *_mediaSelection;
}

@property (weak, nonatomic, readonly) AVAsset *asset;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)propertyList;
- (id)_internal;
- (id)initWithAsset:(id)arg1 propertyList:(id)arg2;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (id)_initWithAsset:(id)arg1;
- (id)_initWithAsset:(id)arg1 selectedMediaArray:(id)arg2;
- (id)_initWithAssetWithoutGroupDictionaries:(id)arg1;
- (id)_selectedMediaArray;
- (id)_groupDictionaries;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (_Bool)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)arg1;

@end
