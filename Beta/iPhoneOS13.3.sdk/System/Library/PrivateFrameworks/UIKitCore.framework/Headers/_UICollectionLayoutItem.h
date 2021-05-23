/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, _UICollectionLayoutEdgeSpacing, _UICollectionLayoutSize;

@interface _UICollectionLayoutItem : NSObject <Swift>

{
    NSArray *_supplementaryItems;
    NSArray *_decorationItems;
    _UICollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
    _UICollectionLayoutSize *_size;
    struct NSDirectionalEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) _UICollectionLayoutSize *size;
@property (nonatomic) struct NSDirectionalEdgeInsets contentInsets;
@property (copy, nonatomic) _UICollectionLayoutEdgeSpacing *edgeSpacing;
@property (copy, nonatomic) NSString *name;

+ (id)itemWithSize:(id)arg1 decorationItems:(id)arg2;
+ (id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3;
+ (id)itemWithSize:(id)arg1;
+ (id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_apiRepresentation;
- (id)initWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3 contentInsets:(struct NSDirectionalEdgeInsets)arg4 edgeSpacing:(id)arg5 name:(id)arg6;

@end
