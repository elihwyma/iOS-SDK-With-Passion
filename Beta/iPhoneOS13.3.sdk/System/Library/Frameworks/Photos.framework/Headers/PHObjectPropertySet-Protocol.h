/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@protocol PHObjectPropertySet <Swift>

+ (unsigned short)propertiesToFetch;
+ (unsigned short)entityName;
+ (unsigned short)isToMany;
+ (unsigned short)keyPathFromPrimaryObject;
+ (unsigned short)keyPathToPrimaryObject;

@end
