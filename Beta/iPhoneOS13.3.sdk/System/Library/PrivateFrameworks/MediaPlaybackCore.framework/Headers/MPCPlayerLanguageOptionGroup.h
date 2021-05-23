/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCPlayerResponse, NSArray, NSString;

@interface MPCPlayerLanguageOptionGroup : NSObject

{
    _Bool _allowEmptySelection;
    unsigned long long _currentIndex;
    NSArray *_options;
    MPCPlayerResponse *_response;
}

@property (weak, nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long numberOfOptions;
@property (nonatomic, readonly) unsigned long long indexOfSelectedOption;
@property (nonatomic, readonly) NSArray *options;

- (id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3;
- (id)localizedTitleForOptionAtIndex:(unsigned long long)arg1;
- (id)changeRequestForOptionAtIndex:(unsigned long long)arg1;

@end
