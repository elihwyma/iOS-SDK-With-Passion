/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSString, NSTextCheckingResult;

__attribute__((visibility("hidden")))
@interface PRRecordedCorrection : NSObject

{
    NSTextCheckingResult *_correctionResult;
    NSString *_correctedString;
    _Bool _hasRecordedResponse;
}

@property _Bool hasRecordedResponse;

- (void)dealloc;
- (id)description;
- (id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2;
- (id)correctionResult;
- (id)correctedString;

@end
