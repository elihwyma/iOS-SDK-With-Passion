/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPStringFormat;

__attribute__((visibility("hidden")))
@interface FPPreflightUserInteractionAlert : NSObject

{
    _Bool _enableContinue;
    FPStringFormat *_titleFormat;
    FPStringFormat *_subtitleFormat;
    FPStringFormat *_continueCaptionFormat;
    FPStringFormat *_cancelCaptionFormat;
}

@property (retain, nonatomic) FPStringFormat *titleFormat;
@property (retain, nonatomic) FPStringFormat *subtitleFormat;
@property (retain, nonatomic) FPStringFormat *continueCaptionFormat;
@property (retain, nonatomic) FPStringFormat *cancelCaptionFormat;
@property (nonatomic) _Bool enableContinue;

+ (id)alertFromDictionary:(id)arg1 localizationLookup:(id)arg2;

@end
