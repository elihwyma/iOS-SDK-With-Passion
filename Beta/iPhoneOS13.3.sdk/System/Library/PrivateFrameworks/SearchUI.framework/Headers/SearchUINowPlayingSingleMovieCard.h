/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <TemplateKit/TLKStackView.h>

@class SFPunchout;

@interface SearchUINowPlayingSingleMovieCard : TLKStackView

{
    SFPunchout *_punchout;
}

@property (retain, nonatomic) SFPunchout *punchout;

- (id)initWithMovie:(id)arg1;
- (void)tapOnMovie:(id)arg1;

@end
