/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@protocol SAAceSerializable;

@interface SANodeIntent : AceObject <Swift>

@property (copy, nonatomic) NSArray *matchingSpans;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *privacyPolicy;
@property (retain, nonatomic) id <SAAceSerializable> value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)nodeIntent;
+ (id)nodeIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
