/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INArchivedObject, INSpeakableString;

@protocol INRunWorkflowIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *workflow;
@property (copy, nonatomic) INArchivedObject *stepIntentResponse;

- (unsigned short)init;

@end
