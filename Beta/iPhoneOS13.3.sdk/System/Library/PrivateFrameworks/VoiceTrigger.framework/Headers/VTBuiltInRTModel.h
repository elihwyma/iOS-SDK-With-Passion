/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VTBuiltInRTModel : NSObject

{
    NSDictionary *_builtInRTModelDictionary;
}

@property (retain, nonatomic) NSDictionary *builtInRTModelDictionary;

+ (id)sharedInstance;

- (void)dealloc;

@end
