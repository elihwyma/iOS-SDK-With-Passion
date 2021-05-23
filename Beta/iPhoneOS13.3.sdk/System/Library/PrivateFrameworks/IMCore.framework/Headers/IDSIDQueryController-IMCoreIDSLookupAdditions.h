/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IDS/IDSIDQueryController.h>

@interface IDSIDQueryController (IMCoreIDSLookupAdditions)

- (void)__imQueryIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)__imBlockingCurrrentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)__imQueryKnownIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)__imQueryIDStatusForHandles:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)__imQueryIDStatusForPerson:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)__imQueryKnownIDStatusForHandles:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)__imQueryKnownIDStatusForPerson:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
