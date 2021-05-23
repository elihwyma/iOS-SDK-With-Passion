/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFClientInfo, NSString;

@interface _AFClientInfoMutation : NSObject

{
    AFClientInfo *_baseModel;
    int _processIdentifier;
    NSString *_processName;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasProcessIdentifier:1;
        unsigned int hasProcessName:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setProcessName:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;

@end
