/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerItemThumbnailKey : NSObject

{
    NSObject *_primaryKey;
    double _scale;
    struct CGSize _size;
}

@property (nonatomic, readonly) NSObject *primaryKey;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryKey:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;

@end
