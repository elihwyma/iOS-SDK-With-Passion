/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@interface BLLibraryUtility : NSObject

+ (_Bool)_isMultiUser;
+ (id)identifierFromBookPath:(id)arg1 error:(id *)arg2;
+ (_Bool)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (id)dcIdentifierFromBookPath:(id)arg1;
+ (id)generateFileUniqueIdFromPath:(id)arg1;
+ (id)p_opfPathFromContainerXmlDoc:(struct _xmlDoc *)arg1 epubPath:(id)arg2;
+ (id)p_opfPathFromContainerXmlPath:(id)arg1 epubPath:(id)arg2;
+ (id)opfPathFromEpubPath:(id)arg1;
+ (id)_dcIdentifierFromOpfPath:(id)arg1 isEPUB:(_Bool)arg2;
+ (id)md5FromPath:(id)arg1;
+ (id)uniqueIdFromEpubPath:(id)arg1;
+ (id)uniqueIdFromPdfPath:(id)arg1;
+ (id)_iTunesMetadataPathForEpubPath:(id)arg1;
+ (id)_storeIdFromiTunesMetadataPath:(id)arg1 error:(id *)arg2;
+ (id)identifierFromBookPath:(id)arg1 allowHash:(_Bool)arg2 allowStoreID:(_Bool)arg3 error:(id *)arg4;
+ (id)identifierFromBookContainer:(id)arg1 allowHash:(_Bool)arg2 allowStoreID:(_Bool)arg3 error:(id *)arg4;
+ (id)identifierFromBookZipArchive:(id)arg1 allowHash:(_Bool)arg2 allowStoreID:(_Bool)arg3 error:(id *)arg4;
+ (id)opfPathFromFullOpfContainerPath:(id)arg1;

@end
