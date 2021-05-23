/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASSetMultilingualDictationConfig : SABaseClientBoundCommand

@property (nonatomic) _Bool multilingualDisabled;
@property (copy, nonatomic) NSNumber *multilingualTimeoutInMillis;

+ (id)setMultilingualDictationConfig;
+ (id)setMultilingualDictationConfigWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
