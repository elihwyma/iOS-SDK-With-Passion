/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject

{
    _Bool _original;
    _Bool _markedForDelete;
    CPLResourceIdentity *_identity;
    NSDate *_lastAccessDate;
}

@property (nonatomic, readonly) CPLResourceIdentity *identity;
@property (nonatomic, readonly, getter=isOriginal) _Bool original;
@property (nonatomic, readonly, getter=isMarkedForDelete) _Bool markedForDelete;
@property (nonatomic, readonly) NSDate *lastAccessDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)initWithIdentity:(id)arg1 original:(_Bool)arg2 markedForDelete:(_Bool)arg3 lastAccessDate:(id)arg4;

@end
