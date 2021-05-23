/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAUIConfirmationOption : AceObject <Swift>

@property (nonatomic) _Bool active;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *iconLabel;
@property (copy, nonatomic) NSString *iconType;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *speechDuration;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)confirmationOption;
+ (id)confirmationOptionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
