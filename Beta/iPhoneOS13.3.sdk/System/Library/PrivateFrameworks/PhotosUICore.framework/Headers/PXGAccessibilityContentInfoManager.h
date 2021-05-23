/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSString;

@interface PXGAccessibilityContentInfoManager : PXObservable

{
    NSArray *_visibleAccessibilityContentInfos;
    NSArray *_extendedAccessibilityContentInfos;
    NSArray *_extendedAccessibilityGroupContentInfos;
}

@property (nonatomic, readonly) NSArray *visibleAccessibilityContentInfos;
@property (nonatomic, readonly) NSArray *extendedAccessibilityContentInfos;
@property (nonatomic, readonly) NSArray *extendedAccessibilityGroupContentInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setVisibleAccessibilityContentInfos:(id)arg1;
- (void)setExtendedAccessibilityContentInfos:(id)arg1;
- (void)setExtendedAccessibilityGroupContentInfos:(id)arg1;

@end
