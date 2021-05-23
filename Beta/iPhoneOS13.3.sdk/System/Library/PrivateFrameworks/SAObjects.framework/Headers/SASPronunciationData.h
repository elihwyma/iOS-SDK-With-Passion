/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SASPronunciationData : AceObject <Swift>

@property (copy, nonatomic) NSString *apgId;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (nonatomic) long long tokenOffset;
@property (copy, nonatomic) NSArray *ttsPronunciations;
@property (copy, nonatomic) NSString *ttsVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)pronunciationData;
+ (id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
