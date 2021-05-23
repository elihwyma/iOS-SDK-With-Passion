/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (FezAdditions)

+ (id)copyNonRetainingArray;
+ (id)nonRetainingArray;

- (void)removeFirstObject;
- (void)__imRandomizeArray;

@end
