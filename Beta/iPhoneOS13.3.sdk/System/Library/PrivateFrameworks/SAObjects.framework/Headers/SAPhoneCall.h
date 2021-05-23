/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSNumber, SAPersonAttribute;

@interface SAPhoneCall : SADomainCommand

@property (retain, nonatomic) SAPersonAttribute *callRecipient;
@property (copy, nonatomic) NSNumber *emergencyCall;
@property (nonatomic) _Bool faceTime;
@property (nonatomic) _Bool faceTimeAudio;
@property (nonatomic) _Bool handsFreeCall;
@property (nonatomic) _Bool speakerphoneCall;

+ (id)call;
+ (id)callWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
