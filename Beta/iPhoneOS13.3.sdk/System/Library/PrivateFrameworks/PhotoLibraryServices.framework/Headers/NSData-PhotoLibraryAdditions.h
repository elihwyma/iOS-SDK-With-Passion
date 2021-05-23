/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSData.h>

@interface NSData (PhotoLibraryAdditions)

+ (id)pl_dataWithMappedContentsOfFileHandle:(id)arg1;
+ (id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1;

- (void)pl_adviceWillNeed;
- (void)pl_adviceDoNotNeed;
- (unsigned long long)pl_advisoryLength;

@end
