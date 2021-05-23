/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@interface QLThumbnailMetadata : NSObject

{
    int _inlinePreviewMode;
    long long _baseline;
}

@property int inlinePreviewMode;
@property long long baseline;

+ (_Bool)supportsSecureCoding;
+ (id)thumbnailMetadataFromPropertiesDictionary:(id)arg1;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertiesDict;

@end
