/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <TemplateKit/TLKLabel.h>

@class SFText;

@interface SearchUILabel : TLKLabel

{
    SFText *_sfText;
}

@property (retain, nonatomic) SFText *sfText;

@end
