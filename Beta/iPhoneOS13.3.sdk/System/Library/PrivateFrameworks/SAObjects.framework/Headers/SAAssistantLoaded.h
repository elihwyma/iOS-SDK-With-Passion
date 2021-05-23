/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *dataAnchor;
@property (copy, nonatomic) NSNumber *requestSync;
@property (copy, nonatomic) NSArray *syncAnchors;
@property (copy, nonatomic) NSString *version;

+ (id)assistantLoaded;
+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
