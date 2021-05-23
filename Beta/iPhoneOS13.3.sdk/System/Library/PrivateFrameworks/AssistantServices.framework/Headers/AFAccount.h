/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface AFAccount : NSObject <Swift>

{
    _Bool _peerSiriEnabled;
    _Bool _isActive;
    NSString *_identifier;
    NSString *_label;
    NSString *_assistantIdentifier;
    NSString *_loggingAssistantIdentifier;
    NSString *_speechIdentifier;
    NSString *_hostname;
    NSString *_peerAssistantIdentifier;
    NSString *_peerLoggingAssistantIdentifier;
    NSString *_peerSpeechIdentifier;
    NSString *_peerUserAgentString;
    NSString *_peerLanguageCode;
    NSString *_peerHostname;
    NSString *_predefinedServer;
    NSString *_aceHost;
    NSDictionary *_connectionPolicy;
    NSDate *_connectionPolicyDate;
    NSString *_connectionPolicyHostname;
    NSString *_group;
    NSDictionary *_lastSyncDates;
    NSString *_localeIdentifier;
    NSDate *_connectionPolicyFirstFailureDate;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *lastSyncDates;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (nonatomic) _Bool isActive;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *loggingAssistantIdentifier;
@property (copy, nonatomic) NSString *speechIdentifier;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *peerLoggingAssistantIdentifier;
@property (copy, nonatomic) NSString *peerSpeechIdentifier;
@property (copy, nonatomic) NSString *peerUserAgentString;
@property (copy, nonatomic) NSString *peerLanguageCode;
@property (nonatomic) _Bool peerSiriEnabled;
@property (copy, nonatomic) NSString *peerHostname;
@property (copy, nonatomic) NSString *predefinedServer;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSDictionary *connectionPolicy;
@property (copy, nonatomic) NSDate *connectionPolicyDate;
@property (copy, nonatomic) NSString *connectionPolicyHostname;
@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSDate *connectionPolicyFirstFailureDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageDictionary:(id)arg1;
- (id)messageDictionary;

@end
