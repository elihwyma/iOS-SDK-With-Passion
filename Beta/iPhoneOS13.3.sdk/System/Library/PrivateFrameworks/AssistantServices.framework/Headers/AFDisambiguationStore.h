/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFManagedStorageConnection;

@interface AFDisambiguationStore : NSObject

{
    AFManagedStorageConnection *_store;
}

- (void)reset;
- (id)_store;
- (id)infoForIdentifier:(id)arg1;
- (void)saveInfo:(id)arg1 forIdentifier:(id)arg2;

@end
