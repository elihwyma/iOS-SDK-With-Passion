/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SATTSSpeechSynthesisWordTimingInfo : AceObject <Swift>

@property (nonatomic) long long length;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSNumber *sampleIndex;
@property (nonatomic) float timestamp;
@property (copy, nonatomic) NSString *word;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)speechSynthesisWordTimingInfo;
+ (id)speechSynthesisWordTimingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
