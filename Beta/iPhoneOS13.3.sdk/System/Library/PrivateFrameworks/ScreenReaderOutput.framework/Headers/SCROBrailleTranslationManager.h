/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class BRLTTranslationService, NSString;

@protocol OS_dispatch_queue;

@interface SCROBrailleTranslationManager : NSObject

{
    _Bool _tableSupportsContractedBraille;
    _Bool _tableSupportsEightDotBraille;
    _Bool _alwaysUsesNemethCodeForTechnicalText;
    NSString *_queue_defaultLanguage;
    BRLTTranslationService *_translationService;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) BRLTTranslationService *translationService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) _Bool primaryTableSupportsContractedBraille;
@property (nonatomic, readonly) _Bool primaryTableSupportsEightDotBraille;
@property (nonatomic) _Bool alwaysUsesNemethCodeForTechnicalText;
@property (copy, nonatomic) NSString *defaultLanguage;

+ (id)sharedManager;

- (id)init;
- (id)printBrailleForText:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 textPositionsRange:(struct _NSRange)arg4 locations:(id *)arg5;
- (id)textForPrintBraille:(id)arg1 language:(id)arg2 mode:(unsigned long long)arg3 locations:(id *)arg4;
- (void)loadTranslatorWithServiceIdentifier:(id)arg1;
- (_Bool)primaryTableSupportsRoundTripping;
- (void)loadTranslatorWithServiceIdentifier:(id)arg1 forUnitTesting:(_Bool)arg2;

@end
