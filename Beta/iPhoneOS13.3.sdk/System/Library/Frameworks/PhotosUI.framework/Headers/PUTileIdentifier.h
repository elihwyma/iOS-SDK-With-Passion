/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath, NSString;

@interface PUTileIdentifier : NSObject <Swift>

{
    unsigned long long _hash;
    NSIndexPath *_indexPath;
    NSString *_tileKind;
    NSString *_dataSourceIdentifier;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSString *tileKind;
@property (nonatomic, readonly) NSString *dataSourceIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;

@end
