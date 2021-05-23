/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAReminderListObject.h>

@class NSNumber, NSString, NSURL;

@interface SAReminderListObjectWrapper : SAReminderListObject

@property (copy, nonatomic) NSNumber *generation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSURL *identifier;

+ (id)listObjectWrapper;
+ (id)listObjectWrapperWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
