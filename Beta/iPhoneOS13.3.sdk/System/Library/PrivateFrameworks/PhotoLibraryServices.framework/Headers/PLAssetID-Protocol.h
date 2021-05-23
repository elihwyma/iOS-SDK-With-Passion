/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLAssetID <Swift>

- (unsigned short)directory;
- (unsigned short)uuid;
- (unsigned short)filename;
- (unsigned short)libraryID;
- (unsigned short)bundleScope;

@end
