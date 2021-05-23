/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRTypologyCorrection : NSObject

{
    NSString *_misspelling;
    struct _NSRange _misspelledRange;
    NSTextCheckingResult *_correctionResult;
    NSMutableString *_logs;
    double _openTime;
    double _closeTime;
    _Bool _isOpen;
}

+ (id)openTypologyCorrectionWithString:(id)arg1 range:(struct _NSRange)arg2 inString:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2;
- (void)addTypologyCorrectionLog:(id)arg1;
- (void)closeTypologyCorrectionWithResult:(id)arg1;

@end
