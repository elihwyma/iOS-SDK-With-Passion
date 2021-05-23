/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SASyncAppIdentifyingInfo : AceObject <Swift>

@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)appIdentifyingInfo;
+ (id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
