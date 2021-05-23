/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSData.h>

@interface NSData (KCJoiningMessages)

+ (id)dataWithEncodedString:(id)arg1 error:(id *)arg2;
+ (id)dataWithEncodedSequenceData:(id)arg1 data:(id)arg2 error:(id *)arg3;
+ (id)dataWithEncodedSequenceString:(id)arg1 data:(id)arg2 error:(id *)arg3;

- (_Bool)decodeSequenceData:(id *)arg1 data:(id *)arg2 error:(id *)arg3;
- (_Bool)decodeSequenceString:(id *)arg1 data:(id *)arg2 error:(id *)arg3;

@end
