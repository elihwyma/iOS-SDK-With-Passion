/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionViewItemKey : NSObject <Swift>

{
    NSIndexPath *_indexPath;
    NSString *_identifier;
    _Bool _isClone;
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;
@property (retain, nonatomic, readonly) NSIndexPath *indexPath;
@property (retain, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool isClone;

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyAsClone:(_Bool)arg1;
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(_Bool)arg4;

@end
