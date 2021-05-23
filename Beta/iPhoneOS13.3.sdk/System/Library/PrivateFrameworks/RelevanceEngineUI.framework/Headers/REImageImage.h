/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngine/REImage.h>

@class UIImage;

@interface REImageImage : REImage

{
    UIImage *_uiImage;
}

@property (retain, nonatomic) UIImage *uiImage;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)image;
- (id)initWithImage:(id)arg1;

@end
