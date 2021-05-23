/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SADistance, SADuration;

@interface SALocalSearchAceNavigationEta : AceObject <Swift>

@property (retain, nonatomic) SADistance *distanceEta;
@property (retain, nonatomic) SADuration *timeEta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)aceNavigationEta;
+ (id)aceNavigationEtaWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
