/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSValue;

__attribute__((visibility("hidden")))
@interface PRTypologyRecord : NSObject

{
    NSString *_string;
    struct _NSRange _range;
    NSString *_language;
    NSArray *_languages;
    NSString *_appIdentifier;
    NSValue *_selectedRangeValue;
    NSArray *_topLanguages;
    NSArray *_keyEventArray;
    NSMutableArray *_typologyCorrections;
    NSMutableArray *_typologyCandidates;
    NSArray *_results;
    double _openTime;
    double _closeTime;
    unsigned long long _offset;
    _Bool _autocorrect;
    _Bool _initialCapitalize;
    _Bool _autocapitalize;
    _Bool _isOpen;
}

+ (id)currentTypologyRecord;
+ (id)openTypologyRecordWithString:(id)arg1 range:(struct _NSRange)arg2 language:(id)arg3 languages:(id)arg4 topLanguages:(id)arg5 autocorrect:(_Bool)arg6 initialCapitalize:(_Bool)arg7 autocapitalize:(_Bool)arg8 keyEventArray:(id)arg9 appIdentifier:(id)arg10 selectedRangeValue:(id)arg11;
+ (void)writeTypologyRecords;
+ (void)resetTypologyRecords;
+ (void)setTypologyRecordsLimit:(unsigned long long)arg1;

- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addCandidate:(id)arg1;
- (void)addCorrection:(id)arg1;
- (id)initWithString:(id)arg1 offset:(unsigned long long)arg2 range:(struct _NSRange)arg3 language:(id)arg4 languages:(id)arg5 topLanguages:(id)arg6 autocorrect:(_Bool)arg7 initialCapitalize:(_Bool)arg8 autocapitalize:(_Bool)arg9 keyEventArray:(id)arg10 appIdentifier:(id)arg11 selectedRangeValue:(id)arg12;
- (void)closeTypologyRecordWithResults:(id)arg1;

@end
