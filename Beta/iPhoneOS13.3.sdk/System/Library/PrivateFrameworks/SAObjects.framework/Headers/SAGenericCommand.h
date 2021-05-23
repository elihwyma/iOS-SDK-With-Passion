/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

@class NSString;

@interface SAGenericCommand : SABaseCommand

@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) NSString *group;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
