/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSNumberFormatter;

@interface _DPInputHelper : NSObject

{
    NSNumberFormatter *_fmt;
}

@property (nonatomic, readonly) NSNumberFormatter *fmt;

- (id)init;
- (id)numberFromString:(id)arg1;
- (id)nonEmptyStringsFromFileAtPath:(id)arg1 separatedBy:(id)arg2 encoding:(unsigned long long)arg3;
- (id)nonEmptyNonWhitespaceStringsFromFileAtPath:(id)arg1;
- (id)nonEmptyStringsFromFileAtPath:(id)arg1;
- (id)nonEmptyStringsFromFileAtPath:(id)arg1 encoding:(unsigned long long)arg2;
- (id)numbersFromFileAtPath:(id)arg1;

@end
