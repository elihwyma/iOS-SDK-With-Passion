/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@protocol PLAssetID <Swift>

- (unsigned short)directory;
- (unsigned short)uuid;
- (unsigned short)filename;
- (unsigned short)libraryID;
- (unsigned short)bundleScope;

@end
