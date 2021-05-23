/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLCompileOptions.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MTLCompileOptionsInternal : MTLCompileOptions

{
    _Bool _userSetLanguageVersion;
    NSDictionary *_preprocessorMacros;
    _Bool _fastMathEnabled;
    _Bool _glBufferBindPoints;
    _Bool _tracingEnabled;
    _Bool _debuggingEnabled;
    unsigned long long _languageVersion;
    _Bool _compileTimeStatisticsEnabled;
    NSString *_additionalCompilerArguments;
    unsigned char _sourceLanguage;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTracingEnabled:(_Bool)arg1;
- (void)setDebuggingEnabled:(_Bool)arg1;
- (void)setFastMathEnabled:(_Bool)arg1;
- (void)setLanguageVersion:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)preprocessorMacros;
- (_Bool)fastMathEnabled;
- (unsigned long long)languageVersion;
- (_Bool)tracingEnabled;
- (_Bool)glBufferBindPoints;
- (_Bool)debuggingEnabled;
- (_Bool)compileTimeStatisticsEnabled;
- (id)additionalCompilerArguments;
- (unsigned char)sourceLanguage;
- (void)setPreprocessorMacros:(id)arg1;
- (void)setGlBufferBindPoints:(_Bool)arg1;
- (void)setCompileTimeStatisticsEnabled:(_Bool)arg1;
- (void)setAdditionalCompilerArguments:(id)arg1;
- (void)setSourceLanguage:(unsigned char)arg1;
- (id)exportDictionary;
- (void)importDictionary:(id)arg1;

@end
