/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICollectionLayoutItem.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, _UICollectionLayoutAnchor;

@interface _UICollectionLayoutDecorationItem : _UICollectionLayoutItem <Swift>

{
    NSString *_elementKind;
    _UICollectionLayoutAnchor *_containerAnchor;
    long long _zIndex;
    Class _registrationViewClass;
    _Bool _isBackgroundDecoration;
}

@property (nonatomic) long long zIndex;
@property (retain, nonatomic, setter=_setRegistrationViewClass:) Class _registrationViewClass;

+ (id)backgroundDecorationItemWithElementKind:(id)arg1;
+ (id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_apiRepresentation;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 zIndex:(long long)arg4 contentInsets:(struct NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 name:(id)arg7 registrationViewClass:(Class)arg8 isBackgroundDecoration:(_Bool)arg9;

@end
