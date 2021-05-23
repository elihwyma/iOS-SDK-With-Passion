/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SAMPSetOutputSource : SADomainCommand

@property (copy, nonatomic) NSURL *outputSourceId;

+ (id)setOutputSource;
+ (id)setOutputSourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
