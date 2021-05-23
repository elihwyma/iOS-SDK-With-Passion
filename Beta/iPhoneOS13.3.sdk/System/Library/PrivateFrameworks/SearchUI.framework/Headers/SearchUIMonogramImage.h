/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIMonogramImage : SearchUIImage

{
    NSString *_letters;
}

@property (retain, nonatomic) NSString *letters;

+ (id)avatarImageRenderer;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSFImage:(id)arg1;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
