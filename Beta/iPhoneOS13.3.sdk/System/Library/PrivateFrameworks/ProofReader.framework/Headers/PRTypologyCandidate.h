/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRTypologyCandidate : NSObject

{
    NSString *_candidateString;
    struct _NSRange _selectedRange;
    NSTextCheckingResult *_result;
    double _openTime;
    double _closeTime;
    _Bool _isOpen;
}

+ (id)openTypologyCandidate:(id)arg1 selectedRange:(struct _NSRange)arg2 inString:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2;
- (void)closeTypologyCandidateWithResult:(id)arg1;

@end
