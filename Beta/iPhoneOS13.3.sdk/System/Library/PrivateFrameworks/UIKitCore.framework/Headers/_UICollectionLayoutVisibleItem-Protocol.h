/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, NSString;

@protocol _UICollectionLayoutVisibleItem <Swift>

@property (nonatomic) double alpha;
@property (nonatomic) long long zIndex;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) struct CATransform3D transform3D;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) unsigned long long representedElementCategory;
@property (nonatomic, readonly) NSString *representedElementKind;

@end
