/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayoutMetrics : NSObject <Swift>

{
    _Bool _locked;
    _Bool _createsPopoverLayoutGuides;
    _Bool _allowsViewWrappers;
    NSLayoutDimension *_verticalSizeGuide;
    NSLayoutDimension *_minimumSpaceGuide;
    NSLayoutDimension *_flexibleSpaceGuide;
    NSLayoutYAxisAnchor *_popoverGuideTopAnchor;
    NSLayoutDimension *_groupSizeGuide;
    NSLayoutDimension *_groupSpacingGuide;
}

@property (retain, nonatomic) NSLayoutDimension *verticalSizeGuide;
@property (retain, nonatomic) NSLayoutDimension *minimumSpaceGuide;
@property (retain, nonatomic) NSLayoutDimension *flexibleSpaceGuide;
@property (retain, nonatomic) NSLayoutYAxisAnchor *popoverGuideTopAnchor;
@property (retain, nonatomic) NSLayoutDimension *groupSizeGuide;
@property (retain, nonatomic) NSLayoutDimension *groupSpacingGuide;
@property (nonatomic) _Bool createsPopoverLayoutGuides;
@property (nonatomic) _Bool allowsViewWrappers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyWithModifications:(CDUnknownBlockType)arg1;
- (id)_upcastIfReadOnly;

@end
