/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAUIConfirmationOptions : AceObject <Swift>

@property (copy, nonatomic) NSArray *allConfirmationOptions;
@property (copy, nonatomic) NSString *cancelTrigger;
@property (copy, nonatomic) NSArray *confirmCommands;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSArray *denyCommands;
@property (copy, nonatomic) NSString *denyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)confirmationOptions;
+ (id)confirmationOptionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
