/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@class DOCThumbnailDescriptor;

@protocol NSCopying;

@interface DOCThumbnailKey : NSObject

{
    NSObject<NSCopying> *_primaryKey;
    DOCThumbnailDescriptor *_descriptor;
}

@property (nonatomic, readonly) NSObject<NSCopying> *primaryKey;
@property (nonatomic, readonly) DOCThumbnailDescriptor *descriptor;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryKey:(id)arg1 descriptor:(id)arg2;

@end
