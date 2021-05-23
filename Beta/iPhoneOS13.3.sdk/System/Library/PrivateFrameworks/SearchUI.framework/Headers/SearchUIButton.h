/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <TemplateKit/TLKButton.h>

@interface SearchUIButton : TLKButton

{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)arg1;
- (void)setFixedSize:(struct CGSize)arg1;
- (void)updateWithType:(unsigned long long)arg1;
- (_Bool)isPlayButton;

@end
