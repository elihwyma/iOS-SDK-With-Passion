/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSObject, NSString;

@protocol PXAccessibilityView, PXDisplayAsset;

@protocol PXGMutableAccessibilityContentInfo <Swift>

@property (nonatomic) struct CGRect frame;
@property (nonatomic) long long contentKind;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) id <PXDisplayAsset> asset;
@property (retain, nonatomic) NSObject<PXAccessibilityView> *view;
@property (nonatomic) _Bool selected;
@property (copy, nonatomic) NSArray *selectedContent;
@property (nonatomic) _Bool visible;

- (unsigned short)px_accessibilityAddChildElement: /* Error: Ran out of types for this method. */;
- (unsigned short)px_accessibilityRemoveAllChildren;

@end
