/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMDiagnostics, AXMLanguage, NSLocale;

@interface AXMTextProcessingOperation : NSObject

{
    AXMLanguage *_language;
    AXMDiagnostics *_diagnostics;
}

@property (nonatomic, readonly) NSLocale *lexiconLocale;
@property (retain, nonatomic) AXMDiagnostics *diagnostics;
@property (nonatomic, readonly) AXMLanguage *language;

+ (id)operationWithLanguage:(id)arg1 diagnostics:(id)arg2;
+ (id)operationWithSystemLanguage:(id)arg1;

- (id)_initWithLanguage:(id)arg1 diagnostics:(id)arg2;

@end
