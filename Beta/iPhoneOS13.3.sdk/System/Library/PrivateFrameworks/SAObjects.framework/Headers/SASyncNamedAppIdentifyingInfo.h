/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASyncAppIdentifyingInfo.h>

@class NSString;

@interface SASyncNamedAppIdentifyingInfo : SASyncAppIdentifyingInfo

@property (copy, nonatomic) NSString *localizedBundleDisplayName;

+ (id)namedAppIdentifyingInfo;
+ (id)namedAppIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
