/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObjectDeleteRequest.h>

@interface PHMomentShareDeleteRequest : PHObjectDeleteRequest

{
    long long _operation;
}

@property (nonatomic) long long operation;

- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;

@end
