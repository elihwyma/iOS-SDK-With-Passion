/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAPerson;

@protocol SAAceComparable;

@interface SAPersonAttribute : AceObject <Swift>

@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSString *displayText;
@property (retain, nonatomic) SAPerson *object;
@property (retain, nonatomic) id <SAAceComparable> typedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)personAttribute;
+ (id)personAttributeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
