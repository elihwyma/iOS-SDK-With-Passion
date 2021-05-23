/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SAUIListenForPronunciationCompleted : SABaseCommand <Swift>

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *interactionId;
@property (retain, nonatomic) SASPronunciationData *pronunciationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)listenForPronunciationCompleted;
+ (id)listenForPronunciationCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
