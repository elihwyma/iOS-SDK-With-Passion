/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *affiliateId;

+ (id)addMediaEntityToAcousticIdHistory;
+ (id)addMediaEntityToAcousticIdHistoryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
