/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@interface INPerson : NSObject <Swift>

{
    NSString *_displayName;
    NSPersonNameComponents *_nameComponents;
    NSString *_userInput;
    NSArray *_aliases;
    long long _suggestionType;
    NSArray *_alternatives;
    _Bool _isMe;
    NSString *_sourceAppBundleIdentifier;
    INPersonHandle *_personHandle;
    INImage *_image;
    NSString *_contactIdentifier;
    NSString *_customIdentifier;
    NSString *_relationship;
    NSString *_phonemeData;
}

@property (copy, nonatomic, readonly) NSString *firstName;
@property (copy, nonatomic, readonly) NSString *lastName;
@property (copy, nonatomic, readonly) NSString *userName;
@property (copy, nonatomic, readonly) NSString *userIdentifier;
@property (copy, nonatomic, readonly) NSString *userURIString;
@property (copy, nonatomic, readonly) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *aliases;
@property (nonatomic, readonly) long long suggestionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (copy, nonatomic, readonly) NSArray *siriMatches;
@property (nonatomic, readonly) _Bool isMe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;
@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) INPersonHandle *personHandle;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) INImage *image;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *customIdentifier;
@property (copy, nonatomic) NSString *relationship;
@property (copy, nonatomic) NSArray *aliases;
@property (nonatomic) long long suggestionType;
@property (nonatomic) _Bool isMe;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSString *phonemeData;
@property (copy, nonatomic, readonly) NSArray *alternativeSiriMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *handle;

+ (_Bool)supportsSecureCoding;
+ (id)expectedCNContactKeys;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_displayName;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)_userInput;
- (id)initWithContact:(id)arg1;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_sourceAppBundleIdentifier;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (_Bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_aliases;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(_Bool)arg7;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(_Bool)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(_Bool)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8;
- (id)spokenPhrases;
- (id)_intents_indexingRepresentation;

@end
