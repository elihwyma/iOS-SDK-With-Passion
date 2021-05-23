/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CertificateErrorHandler : NSObject

{
    NSMutableDictionary *_banned;
    NSMutableArray *_store;
    _Bool _disabled;
    id _resetObserver;
    unsigned int _maxAge;
    unsigned int _maxCount;
}

@property (nonatomic) unsigned int maxAge;
@property (nonatomic) unsigned int maxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;

- (id)init;
- (void)_reset:(id)arg1;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (_Bool)noteSymptom:(id)arg1;
- (id)evaluate:(id)arg1 forThreshold:(long long)arg2;

@end
