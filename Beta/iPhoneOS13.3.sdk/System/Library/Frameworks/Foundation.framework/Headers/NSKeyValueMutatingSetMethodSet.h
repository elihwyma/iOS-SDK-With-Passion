/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueMutatingCollectionMethodSet.h>

__attribute__((visibility("hidden")))
@interface NSKeyValueMutatingSetMethodSet : NSKeyValueMutatingCollectionMethodSet

{
    struct objc_method *addObject;
    struct objc_method *removeObject;
    struct objc_method *intersectSet;
    struct objc_method *minusSet;
    struct objc_method *unionSet;
    struct objc_method *setSet;
}

@end
