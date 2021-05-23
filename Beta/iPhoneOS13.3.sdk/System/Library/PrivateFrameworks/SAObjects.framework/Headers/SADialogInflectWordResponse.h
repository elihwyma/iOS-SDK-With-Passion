/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SADialogInflectWordResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *print;
@property (copy, nonatomic) NSString *speak;

+ (id)inflectWordResponse;
+ (id)inflectWordResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
