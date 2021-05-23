/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSData, NSString;

@interface SALocalSearchRoute : AceObject

@property (copy, nonatomic) NSData *routeAsZilchBinary;
@property (copy, nonatomic) NSData *routeId;
@property (copy, nonatomic) NSData *sessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)route;
+ (id)routeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
