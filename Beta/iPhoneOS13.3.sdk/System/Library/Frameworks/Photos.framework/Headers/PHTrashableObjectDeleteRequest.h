/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObjectDeleteRequest.h>

@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest

{
    _Bool _clientEntitledToExpunge;
    long long _operation;
}

@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly, getter=isClientEntitledToExpunge) _Bool clientEntitledToExpunge;

+ (id)deleteRequestForObject:(id)arg1;
+ (id)deleteRequestForObject:(id)arg1 operation:(long long)arg2;

- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 operation:(long long)arg3;

@end
