/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RedirectHandler : NSObject

{
    NSString *_originalURLKey;
    NSString *_redirectURLKey;
    unsigned int _ignoreFor;
    unsigned int _maxCount;
    double _maxAge;
    NSMutableDictionary *_ignoredDestinations;
    unsigned int _numIgnored;
    double _numIgnoredScaleFactor;
    NSString *_currentRedirectURL;
    NSMutableDictionary *_redirectedOrigins;
    NSMutableDictionary *_requestingPids;
    NSDate *_pruningTime;
    unsigned int _numNegatives;
    id _resetObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sharedInstance;
+ (id)configureClass:(id)arg1;
+ (_Bool)noteSymptom:(id)arg1;
+ (id)evaluate:(id)arg1 forThreshold:(long long)arg2;
+ (id)generateAdditionalInfo:(id)arg1;

- (id)init;
- (void)_reset:(id)arg1;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (_Bool)noteSymptom:(id)arg1;
- (id)evaluate:(id)arg1 forThreshold:(long long)arg2;
- (id)generateAdditionalInfo:(id)arg1;
- (void)_prune;
- (void)performNegativeFeedback:(id)arg1;
- (void)_pruneDir:(id)arg1;
- (void)_addRedirectFrom:(id)arg1 To:(id)arg2 by:(unsigned long long)arg3 atTime:(unsigned int)arg4;

@end
