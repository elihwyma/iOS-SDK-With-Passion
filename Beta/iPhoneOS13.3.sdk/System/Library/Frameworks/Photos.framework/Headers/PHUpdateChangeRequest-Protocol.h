/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@protocol PHUpdateChangeRequest <Swift>

@property (readonly, getter=isMutated) _Bool mutated;

- (unsigned short)allowMutationToManagedObject:propertyKey:error: /* Error: Ran out of types for this method. */;
- (unsigned short)validateMutationsToManagedObject:error: /* Error: Ran out of types for this method. */;
- (unsigned short)applyMutationsToManagedObject:photoLibrary:error: /* Error: Ran out of types for this method. */;

@end
