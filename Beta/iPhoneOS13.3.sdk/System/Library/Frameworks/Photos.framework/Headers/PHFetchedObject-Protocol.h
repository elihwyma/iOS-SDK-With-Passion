/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSManagedObjectID;

@protocol PHFetchedObject <Swift>

@property (nonatomic, readonly) NSManagedObjectID *objectID;

+ (unsigned short)propertiesToFetch;
+ (unsigned short)entityName;

- (unsigned short)initWithObjectID:knownKeysDictionary:firstKeyIndex:photoLibrary: /* Error: Ran out of types for this method. */;

@end
