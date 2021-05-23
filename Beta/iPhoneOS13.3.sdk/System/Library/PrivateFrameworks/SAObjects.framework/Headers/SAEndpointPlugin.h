/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointPlugin : SAEndpoint

@property (copy, nonatomic) NSString *pluginPath;

+ (id)endpointPlugin;
+ (id)endpointPluginWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
