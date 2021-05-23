/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@interface SAStructuredDictationAddressResult : AceObject <Swift>

@property (copy, nonatomic) NSString *addressLabel;
@property (copy, nonatomic) NSURL *contactId;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSData *forwardGeoProtobuf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)structuredDictationAddressResult;
+ (id)structuredDictationAddressResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
