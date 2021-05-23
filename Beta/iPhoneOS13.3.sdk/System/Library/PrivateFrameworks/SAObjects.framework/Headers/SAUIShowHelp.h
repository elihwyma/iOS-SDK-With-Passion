/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *speakableText;
@property (copy, nonatomic) NSString *text;

+ (id)showHelp;
+ (id)showHelpWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
