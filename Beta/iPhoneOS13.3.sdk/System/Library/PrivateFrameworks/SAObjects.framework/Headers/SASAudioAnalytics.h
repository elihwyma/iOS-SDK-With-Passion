/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface SASAudioAnalytics : AceObject <Swift>

@property (copy, nonatomic) NSDictionary *acousticFeatures;
@property (copy, nonatomic) NSDictionary *speechRecognitionFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)audioAnalytics;
+ (id)audioAnalyticsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
