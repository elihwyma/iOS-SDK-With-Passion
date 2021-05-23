/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFMutableConversationItem, NSString;

@interface AFConversationItem : NSObject

{
    AFMutableConversationItem *_delegateItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)type;
- (id)identifier;
- (id)revisionIdentifier;
- (long long)presentationState;
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(_Bool)arg8 associatedDataStore:(id)arg9;
- (id)aceObject;
- (id)dialogPhase;
- (id)aceCommandIdentifier;
- (_Bool)isVirgin;
- (id)associatedDataStore;
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(_Bool)arg6 associatedDataStore:(id)arg7;
- (id)initWithDelegateItem:(id)arg1;

@end
