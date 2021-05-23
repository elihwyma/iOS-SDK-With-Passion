/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXTilingScrollInfo : NSObject <Swift>

{
    _Bool _pagingEnabled;
    unsigned long long _axis;
    struct CGSize _interpageSpacing;
    struct CGPoint _pagingOrigin;
}

@property (nonatomic) unsigned long long axis;
@property (nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
@property (nonatomic) struct CGSize interpageSpacing;
@property (nonatomic) struct CGPoint pagingOrigin;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
