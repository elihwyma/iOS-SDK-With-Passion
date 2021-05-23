/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFormat.h>

@interface BWMetadataFormat : BWFormat

{
    struct opaqueCMFormatDescription *_desc;
}

+ (void)initialize;
+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription *)arg1;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription *)formatDescription;
- (id)_initWithMetadataFormat:(struct opaqueCMFormatDescription *)arg1;

@end
