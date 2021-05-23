/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SADialogInflectWordCommand : SABaseCommand <Swift>

@property (copy, nonatomic) NSArray *constraints;
@property (nonatomic) _Bool defaultToSemantic;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *semanticFeatureName;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)inflectWordCommand;
+ (id)inflectWordCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
