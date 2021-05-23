/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject

{
    NSDictionary *_formatDictionary;
    struct opaqueCMFormatDescription *_formatDescription;
    CDStruct_79c71658 _previewDimensions;
}

@property (readonly) unsigned int mediaType;
@property (readonly) struct opaqueCMFormatDescription *formatDescription;
@property (readonly) unsigned int format;
@property (readonly, getter=isDefaultActiveFormat) _Bool defaultActiveFormat;
@property (readonly, getter=isExperimental) _Bool experimental;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;

@end
