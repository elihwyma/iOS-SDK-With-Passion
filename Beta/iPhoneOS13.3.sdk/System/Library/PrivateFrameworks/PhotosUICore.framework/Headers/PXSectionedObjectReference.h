/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@protocol NSObject><NSCopying;

@interface PXSectionedObjectReference : NSObject <Swift>

{
    id <NSObject><NSCopying> _sectionObject;
    id <NSObject><NSCopying> _itemObject;
    id <NSObject><NSCopying> _subitemObject;
    id <NSObject><NSCopying> _leafObject;
    struct PXSimpleIndexPath _indexPath;
}

@property (copy, nonatomic, readonly) id <NSObject><NSCopying> sectionObject;
@property (copy, nonatomic, readonly) id <NSObject><NSCopying> itemObject;
@property (copy, nonatomic, readonly) id <NSObject><NSCopying> subitemObject;
@property (nonatomic, readonly) struct PXSimpleIndexPath indexPath;
@property (copy, nonatomic, readonly) id <NSObject><NSCopying> leafObject;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionObject:(id)arg1 itemObject:(id)arg2 subitemObject:(id)arg3 indexPath:(struct PXSimpleIndexPath)arg4;

@end
