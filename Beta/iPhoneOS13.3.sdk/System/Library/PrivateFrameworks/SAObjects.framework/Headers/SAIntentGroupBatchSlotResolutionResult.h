/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SAIntentGroupBatchSlotResolutionResult : AceObject <Swift>

@property (copy, nonatomic) NSString *base64EncodedIntent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (copy, nonatomic) NSDictionary *slotResolutionMap;
@property (copy, nonatomic) NSArray *stepResults;
@property (copy, nonatomic) NSString *typeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)batchSlotResolutionResult;
+ (id)batchSlotResolutionResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
