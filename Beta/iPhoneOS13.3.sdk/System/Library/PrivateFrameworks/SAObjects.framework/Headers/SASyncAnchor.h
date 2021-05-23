/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SASyncAppMetaData;

@interface SASyncAnchor : AceObject <Swift>

@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SASyncAppMetaData *appMetaData;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *generation;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSNumber *suspendDurationInSeconds;
@property (copy, nonatomic) NSString *suspendReason;
@property (copy, nonatomic) NSString *validity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)anchor;
+ (id)anchorWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
