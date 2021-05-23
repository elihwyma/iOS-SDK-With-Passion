/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class CKKnowledgeStore, NSArray;

@interface VSServerTTSConfig : NSObject

{
    CKKnowledgeStore *_knowledgeStore;
}

@property (retain, nonatomic) CKKnowledgeStore *knowledgeStore;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) double deviceWaitTime;
@property (nonatomic, readonly) _Bool prefer;
@property (nonatomic, readonly) _Bool disableOsprey;
@property (nonatomic, readonly) NSArray *whitelistedAppId;

+ (id)defaultConfig;

- (id)init;

@end
