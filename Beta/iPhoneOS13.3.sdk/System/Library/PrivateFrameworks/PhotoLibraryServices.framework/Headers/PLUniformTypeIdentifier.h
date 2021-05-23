/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSString;

@interface PLUniformTypeIdentifier : PLManagedObject

{
    NSNumber *_isLosslessEncoding;
    NSNumber *_conformsToJPEG;
}

@property (nonatomic) _Bool conformsToRawImage;
@property (nonatomic) _Bool conformsToImage;
@property (nonatomic) _Bool conformsToMovie;
@property (nonatomic, readonly) _Bool conformsToAudio;
@property (nonatomic, readonly) _Bool conformsToJPEG;
@property (nonatomic, readonly) _Bool conformsToData;
@property (nonatomic, readonly, getter=isDynamic) _Bool dynamic;
@property (nonatomic, readonly) _Bool isPlayableVideo;
@property (nonatomic, readonly) _Bool isLosslessEncoding;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *preferredExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isPrimaryImageFormat) _Bool primaryImageFormat;

+ (id)entityName;
+ (id)uniformTypeIdentifierFromString:(id)arg1 createIfMissing:(_Bool)arg2 context:(id)arg3;
+ (id)jpegUniformTypeIdentifierInContext:(id)arg1;
+ (id)videoComplementUniformTypeIdentifierInContext:(id)arg1;
+ (id)plistUniformTypeIdentifierInContext:(id)arg1;
+ (id)utisConformingToRAWInContext:(id)arg1;

- (_Bool)validateForDelete:(id *)arg1;
- (_Bool)supportsCloudUpload;

@end
