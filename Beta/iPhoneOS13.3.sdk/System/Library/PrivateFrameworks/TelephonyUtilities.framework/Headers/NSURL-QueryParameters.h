/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (QueryParameters)

@property (readonly) NSString *phoneNumber;
@property (readonly) _Bool forceAssist;
@property (readonly) _Bool suppressAssist;
@property (readonly) _Bool wasAlreadyAssisted;
@property (readonly) _Bool isEmergencyURL;
@property (readonly) _Bool isEmergencyCallURL;
@property (readonly) _Bool isVoicemailURL;
@property (readonly) int callService;
@property (readonly) NSString *originatingUIIdentifier;
@property (nonatomic, readonly) int addressBookUID;
@property (copy, nonatomic, readonly) NSString *formattedPhoneNumber;
@property (copy, nonatomic, readonly) NSString *numberQualifiedForAddressBook;
@property (nonatomic, readonly, getter=isBasebandLogURL) _Bool basebandLogURL;

+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimeLaunchForOutgoingConversationURL;
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3 forceAssist:(_Bool)arg4 suppressAssist:(_Bool)arg5 wasAssisted:(_Bool)arg6;
+ (id)telephonyURLWithDestinationID:(id)arg1;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(_Bool)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;

- (_Bool)hasTelephonyScheme;
- (_Bool)isFaceTimeURL;
- (_Bool)isFaceTimeAudioURL;
- (id)queryParameters;
- (id)tuQueryParameters;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (_Bool)isFaceTimePromptURL;
- (_Bool)isFaceTimeAudioPromptURL;
- (_Bool)isLaunchForIncomingCallURL;
- (_Bool)isShowInCallUIURL;
- (id)faceTimeDestinationAccount;
- (_Bool)_isPhoneNumberID:(id)arg1;
- (_Bool)isFaceTimeMultiwayURL;
- (_Bool)hasNoPromptOption;
- (_Bool)isDialCallURL;
- (_Bool)isLaunchForOutgoingConversationURL;
- (id)_destinationIDConvertingNumbersToLatin:(_Bool)arg1;
- (id)_mobilePhoneQueryParameters;
- (_Bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;
- (_Bool)_hasScheme:(id)arg1;
- (_Bool)isTelephonyPromptURL;
- (_Bool)isTelephonyURL;
- (id)_mobilePhonePathParameters;
- (_Bool)isWebSafeTelephoneURL;
- (id)webSafeTelephoneURL;
- (id)telephonyParameterDictionary;

@end
