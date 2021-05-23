/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, WFLSMResult;

__attribute__((visibility("hidden")))
@interface WFVerdict : NSObject

{
    _Bool restricted;
    WFLSMResult *LSMEvaluationResult;
    NSString *message;
    NSString *URL;
    int evidence;
}

+ (id)verdictWithRestriction:(_Bool)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5;

- (void)dealloc;
- (id)description;
- (void)setURL:(id)arg1;
- (id)URL;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setRestricted:(_Bool)arg1;
- (_Bool)restricted;
- (void)setEvidence:(int)arg1;
- (void)setLSMEvaluationResult:(id)arg1;
- (id)LSMEvaluationResult;
- (int)evidence;

@end
