/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObjectDeleteRequest.h>

@interface PHPersonDeleteRequest : PHObjectDeleteRequest

{
    _Bool _force;
}

@property (nonatomic) _Bool force;

- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;

@end
