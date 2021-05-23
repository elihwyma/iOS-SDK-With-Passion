/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIAppIconImage.h>

@class UIWebClip;

@interface SearchUIWebClipIconImage : SearchUIAppIconImage

{
    UIWebClip *_webClip;
}

@property (retain, nonatomic) UIWebClip *webClip;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (id)initWithWebClip:(id)arg1 variant:(unsigned long long)arg2;
- (id)generateImageWithFormat:(int)arg1;

@end
