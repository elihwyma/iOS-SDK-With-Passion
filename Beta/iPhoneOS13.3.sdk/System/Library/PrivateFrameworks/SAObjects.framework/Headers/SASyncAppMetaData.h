/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString, SASyncAppIdentifyingInfo;

@interface SASyncAppMetaData : AceObject <Swift>

@property (retain, nonatomic) SASyncAppIdentifyingInfo *appIdentifyingInfo;
@property (copy, nonatomic) NSNumber *developerMode;
@property (copy, nonatomic) NSArray *syncSlots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)appMetaData;
+ (id)appMetaDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
