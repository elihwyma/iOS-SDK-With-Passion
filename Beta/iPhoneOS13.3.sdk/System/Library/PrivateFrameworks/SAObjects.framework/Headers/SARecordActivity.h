/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAActivityObject;

@interface SARecordActivity : SABaseClientBoundCommand

@property (retain, nonatomic) SAActivityObject *activity;

+ (id)recordActivity;
+ (id)recordActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
