/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStyledInfo.h>

@class NSString;

@interface TSDMediaInfo : TSDStyledInfo

{
    struct CGSize mOriginalSize;
    struct {
        unsigned int isPlaceholder:1;
        unsigned int wasMediaReplaced:1;
    } mFlags;
}

@property (nonatomic) struct CGSize originalSize;
@property (nonatomic, readonly) struct CGSize defaultOriginalSize;
@property (nonatomic) _Bool isPlaceholder;
@property (nonatomic) _Bool wasMediaReplaced;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) NSString *mediaDisplayName;
@property (nonatomic, readonly) NSString *mediaFileType;
@property (nonatomic, readonly) struct CGSize rawDataSize;

- (void)setGeometry:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (struct CGPoint)centerForReplacingWithNewMedia;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;

@end
