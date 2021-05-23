/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@interface ETTaskState : NSObject

{
    shared_ptr_d082c67d _networkPointer;
    unordered_map_74b681bc _blobs;
}

@property unordered_map_74b681bc blobs;
@property shared_ptr_d082c67d networkPointer;

- (id).cxx_construct;
- (id)initWithNetwork:(shared_ptr_d082c67d)arg1;
- (id)initWithBlobMap:(unordered_map_74b681bc *)arg1;

@end
