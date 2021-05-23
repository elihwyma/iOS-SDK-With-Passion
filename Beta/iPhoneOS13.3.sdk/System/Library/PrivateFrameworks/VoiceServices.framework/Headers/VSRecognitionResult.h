/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@interface VSRecognitionResult : NSObject

+ (void)initialize;
+ (id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3;

- (id)init;
- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (id)description;
- (id)modelIdentifier;
- (long long)elementCount;
- (_Bool)getElementClassIdentifier:(id *)arg1 value:(id *)arg2 atIndex:(long long)arg3;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2;
- (id)valueOfFirstElementWithClassIdentifier:(id)arg1;
- (id)createHandler;
- (void)setRecognitionAction:(id)arg1;
- (id)recognitionAction;

@end
