/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSEncodingDetector : NSObject

{
    unsigned long long _nsEncoding;
    unsigned int _cfEncoding;
    unsigned long long _givenNumBytes;
    unsigned long long _numChars;
    unsigned long long _numMultiByteChars;
    unsigned long long _numSingleBytechars;
    unsigned long long _skipBytes;
    unsigned long long _numZeroBytes;
    unsigned long long _mostFrqChars;
    unsigned long long _numBigrams;
    unsigned long long _numRep;
    unsigned long long _numDirect;
    unsigned long long _numBase64;
    unsigned long long _numSeq;
    unsigned long long _numTrigram;
    unsigned long long _numLower;
    unsigned long long _numHigher;
    double _weight;
    _Bool _hasBase64;
    _Bool _isBigEndian;
    _Bool _hasBOM;
    unsigned int _tag;
}

@property (readonly) unsigned long long nsEncoding;
@property (readonly) unsigned int cfEncoding;

+ (Class)classForCFStringEncoding:(unsigned int)arg1;
+ (id)detectorForCFStringEncoding:(unsigned int)arg1 allowBackupDetectors:(_Bool)arg2;

- (unsigned long long)recognizeString:(const char *)arg1 withDataLength:(unsigned long long)arg2 intoBuffer:(id)arg3;
- (void)reset;
- (id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned int)arg2;
- (void)softReset;
- (double)bytesRatio;
- (unsigned long long)maxSkipBytes;
- (double)confidence;
- (double)confidenceWith2Chars;
- (double)multiBytesRatio;

@end
