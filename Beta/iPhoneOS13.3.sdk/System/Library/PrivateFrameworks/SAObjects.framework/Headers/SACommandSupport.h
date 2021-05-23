/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, NSURL, SAObjectSupport;

@interface SACommandSupport : AceObject <Swift>

@property (copy, nonatomic) NSString *aceVersion;
@property (copy, nonatomic) NSString *commandId;
@property (retain, nonatomic) SAObjectSupport *resultSupport;
@property (copy, nonatomic) NSURL *serverEndpoint;
@property (copy, nonatomic) NSArray *supportedConstraints;
@property (nonatomic) long long weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)commandSupport;
+ (id)commandSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
