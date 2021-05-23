/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLEduAgent : PLAgent

{
    PLXPCListenerOperatorComposition *_syncBubbleStatusNotification;
}

@property (retain) PLXPCListenerOperatorComposition *syncBubbleStatusNotification;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionMode;
+ (id)entryEventPointDefinitionSyncBubble;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventPointMode:(_Bool)arg1;

@end
