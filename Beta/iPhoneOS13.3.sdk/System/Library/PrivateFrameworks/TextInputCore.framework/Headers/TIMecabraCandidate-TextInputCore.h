/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInput/TIMecabraCandidate.h>

@interface TIMecabraCandidate (TextInputCore)

+ (id)convertedInputFromMecabraCandidate:(void *)arg1;
+ (id)displayReadingFromMecabraCandidate:(void *)arg1;
+ (id)mecabraCandidateWithCandidateRef:(const void *)arg1 autoconvertedCandidates:(id)arg2;

- (id)initWithMecabraCandidate:(const void *)arg1 cursorMovement:(long long)arg2;
- (id)initWithMecabraCandidate:(const void *)arg1;

@end
