/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Intents/INIntent.h>

@class NSDictionary, NSString;

@interface INIntent (RELogging)

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *launchId;
@property (nonatomic, readonly) NSString *_nanoLaunchId;
@property (nonatomic, readonly) NSString *_categoryVerb;
@property (nonatomic, readonly) NSString *_className;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) _Bool _supportsBackgroundExecution;
@property (nonatomic, readonly) NSDictionary *_validParameterCombinations;

@end
