/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryKey : NSObject <Swift>

{
    _Bool _isSupplementary;
    NSString *_elementKind;
    long long _index;
    long long _auxillaryKind;
}

@property (nonatomic, readonly) NSString *elementKind;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) long long auxillaryKind;
@property (nonatomic, readonly) _Bool isSupplementary;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithElementKind:(id)arg1 index:(long long)arg2 auxillaryKind:(long long)arg3 isSupplementary:(_Bool)arg4;

@end
