/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIdentifyingInfo;
@property (nonatomic) _Bool shouldSearchLocallyOnly;

+ (id)getAppInfo;
+ (id)getAppInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
