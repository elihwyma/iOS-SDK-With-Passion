/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNXPCDataMapperProgressiveHandler : NSObject

{
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

- (void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2;
- (void)completedWithError:(id)arg1;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
