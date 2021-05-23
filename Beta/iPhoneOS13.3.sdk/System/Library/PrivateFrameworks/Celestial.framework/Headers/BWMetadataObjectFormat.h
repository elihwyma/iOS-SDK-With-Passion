/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFormat.h>

@class NSArray;

@interface BWMetadataObjectFormat : BWFormat

{
    NSArray *_metadataIdentifiers;
}

+ (void)initialize;
+ (id)formatWithMetadataIdentifiers:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (unsigned int)mediaType;
- (id)_initWithMetadataIdentifiers:(id)arg1;

@end
