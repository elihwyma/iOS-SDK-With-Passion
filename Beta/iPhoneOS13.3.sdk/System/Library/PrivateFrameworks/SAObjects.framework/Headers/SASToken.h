/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SASToken : AceObject <Swift>

@property (nonatomic) _Bool addSpaceAfter;
@property (copy, nonatomic) NSNumber *confidenceScore;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSString *phoneSequence;
@property (copy, nonatomic) NSString *recognitionStability;
@property (nonatomic) _Bool removeSpaceAfter;
@property (nonatomic) _Bool removeSpaceBefore;
@property (copy, nonatomic) NSNumber *silenceStartTime;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)token;
+ (id)tokenWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
