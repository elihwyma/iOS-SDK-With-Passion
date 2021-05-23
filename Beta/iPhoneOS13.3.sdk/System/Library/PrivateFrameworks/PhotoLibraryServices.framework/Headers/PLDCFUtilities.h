/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLDCFUtilities : NSObject

+ (id)dcfRegex;
+ (_Bool)isValidDCFFileName:(id)arg1;
+ (id)dcfCompliantNameForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 filenameMarker:(id)arg4;
+ (id)dcfRegexForAuxiliaryResourceFilenameMarker:(id)arg1;
+ (id)renderDCFRegex;
+ (_Bool)isRenderFileName:(id)arg1;
+ (id)fileNameByRemovingRenderMarkerInFileName:(id)arg1;
+ (_Bool)isSpatialOverCaptureFileName:(id)arg1;
+ (id)fileNameByRemovingSpatialOverCaptureMarkerInFileName:(id)arg1;
+ (_Bool)fileName:(id)arg1 matchesRegex:(id)arg2;
+ (id)makeDCFFileNameFromFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (id)makeDCFFileNameByHashingFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (id)insertAuxiliaryResourceTypeMarker:(id)arg1 intoFileName:(id)arg2;
+ (unsigned int)hashForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (void)computeSHA256OfString:(id)arg1 intoBuffer:(char *)arg2;
+ (id)encodeFileNameFromHash:(unsigned int)arg1;
+ (id)convertHash:(unsigned int)arg1 usingPlaceValues:(id)arg2;
+ (id)placeValuesFromBases:(id)arg1;

@end
