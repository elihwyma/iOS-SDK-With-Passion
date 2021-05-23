/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/Swift-Protocol.h>

@protocol AFConversationStorable <Swift>

- (unsigned short)type;
- (unsigned short)identifier;
- (unsigned short)revisionIdentifier;
- (unsigned short)presentationState;
- (unsigned short)aceObject;
- (unsigned short)dialogPhase;
- (unsigned short)aceCommandIdentifier;
- (unsigned short)isVirgin;
- (unsigned short)associatedDataStore;

@end
