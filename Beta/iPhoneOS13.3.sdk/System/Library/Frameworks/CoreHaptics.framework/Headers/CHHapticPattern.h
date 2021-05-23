/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface CHHapticPattern : NSObject

{
    NSNumber *_version;
    NSMutableArray *_embeddedURLs;
    NSMutableArray *_events;
    NSMutableArray *_parameters;
    NSMutableArray *_parameterCurves;
}

@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *events;
@property (readonly) NSArray *parameters;
@property (readonly) NSArray *parameterCurves;

+ (id)eventListFromEvents:(id)arg1 parameters:(id)arg2 parameterCurves:(id)arg3 engine:(id)arg4 privileged:(_Bool)arg5;

- (id)init;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (_Bool)resolveExternalResources:(id)arg1 error:(id *)arg2;
- (id)initWithEvents:(id)arg1 parameterCurves:(id)arg2 error:(id *)arg3;
- (id)exportDictionaryAndReturnError:(id *)arg1;
- (id)eventListFromDictionary:(id)arg1 error:(id *)arg2;

@end
