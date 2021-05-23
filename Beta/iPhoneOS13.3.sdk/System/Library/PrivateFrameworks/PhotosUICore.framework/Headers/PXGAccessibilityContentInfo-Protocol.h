/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSObject, NSString;

@protocol PXAccessibilityView, PXDisplayAsset;

@protocol PXGAccessibilityContentInfo <Swift>

@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) long long contentKind;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) NSObject<PXAccessibilityView> *view;
@property (nonatomic, readonly) _Bool selected;
@property (copy, nonatomic, readonly) NSArray *selectedContent;
@property (nonatomic, readonly) _Bool visible;
@property (nonatomic, readonly) NSArray *px_accessibilityChildren;

@end
