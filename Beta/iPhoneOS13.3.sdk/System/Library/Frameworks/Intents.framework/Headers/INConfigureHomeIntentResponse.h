/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResponse.h>

@class NSString;

@interface INConfigureHomeIntentResponse : INIntentResponse

@property (nonatomic, readonly) long long code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (int)_typeFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithBackingStore:(id)arg1;
- (long long)_intentResponseCode;
- (long long)_codeWithName:(id)arg1;
- (void)setPropertiesByName:(id)arg1;

@end
