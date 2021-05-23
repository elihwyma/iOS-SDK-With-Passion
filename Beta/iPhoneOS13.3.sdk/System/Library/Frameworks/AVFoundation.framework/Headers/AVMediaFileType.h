/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVDispatchOnce, NSSet, NSString;

@interface AVMediaFileType : NSObject

{
    NSString *_uti;
    AVDispatchOnce *_supportsSampleReferencesOnce;
    _Bool _supportsSampleReferences;
}

@property (nonatomic, readonly) NSString *defaultFileExtension;
@property (nonatomic, readonly) NSSet *supportedMediaTypes;
@property (nonatomic, readonly) _Bool supportsSampleReferences;
@property (nonatomic, readonly) NSString *UTI;
@property (nonatomic, readonly) NSString *figFormatReaderFileFormat;
@property (nonatomic, readonly) unsigned int audioFileTypeID;

+ (void)initialize;
+ (id)allFileTypeIdentifiers;
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id *)arg2;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;
+ (id)isoFileTypes;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)supportsFormat:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)supportsOutputSettings:(id)arg1 reason:(id *)arg2;
- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id *)arg2;

@end
