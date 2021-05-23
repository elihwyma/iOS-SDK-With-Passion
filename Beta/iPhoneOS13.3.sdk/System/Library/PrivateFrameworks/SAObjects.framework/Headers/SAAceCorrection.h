/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAAceCorrection : SADomainObject

@property (copy, nonatomic) NSData *correctionEntryData;
@property (copy, nonatomic) NSString *debugString;

+ (id)aceCorrection;
+ (id)aceCorrectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
