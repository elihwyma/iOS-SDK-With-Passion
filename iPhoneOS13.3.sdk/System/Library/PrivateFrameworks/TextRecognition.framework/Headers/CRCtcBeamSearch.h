//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRLanguageResources, NSLocale;

@interface CRCtcBeamSearch : NSObject
{
    struct _LXLexicon _dynamicLexicon;
    NSLocale *_locale;
    CRLanguageResources *_languageResources;
}

@property(readonly, nonatomic) CRLanguageResources *languageResources; // @synthesize languageResources=_languageResources;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) struct _LXLexicon dynamicLexicon; // @synthesize dynamicLexicon=_dynamicLexicon;
// - (void).cxx_destruct;
- (id)kBestPathsForInput:(id)arg1 k:(NSUInteger)arg2 beamWidth:(NSUInteger)arg3 outputProbs:(id )arg4 outputWhitespaceRanges:(id )arg5;
- (struct _LXLexicon )newDynamicLexiconForLocale:(id)arg1 error:(id )arg2;
- (void)loadDynamicLexicon:(id)arg1 forLocale:(id)arg2;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 languageResources:(id)arg2;

@end

