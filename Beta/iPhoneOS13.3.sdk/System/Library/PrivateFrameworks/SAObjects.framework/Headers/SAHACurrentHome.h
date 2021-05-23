/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSString;

@interface SAHACurrentHome : AceObject

@property (copy, nonatomic) NSString *currentHomeIdentifier;
@property (copy, nonatomic) NSString *currentHomeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentHome;
+ (id)currentHomeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
