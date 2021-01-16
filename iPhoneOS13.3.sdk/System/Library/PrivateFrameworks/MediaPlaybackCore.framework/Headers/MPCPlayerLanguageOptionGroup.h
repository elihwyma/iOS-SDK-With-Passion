//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, NSArray, NSString;

@interface MPCPlayerLanguageOptionGroup : NSObject
{
    BOOL _allowEmptySelection;
    NSUInteger _currentIndex;
    NSArray *_options;
    MPCPlayerResponse *_response;
}

@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
// - (void).cxx_destruct;
- (id)changeRequestForOptionAtIndex:(NSUInteger)arg1;
- (id)localizedTitleForOptionAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger indexOfSelectedOption;
@property(readonly, nonatomic) NSUInteger numberOfOptions;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3;

@end
