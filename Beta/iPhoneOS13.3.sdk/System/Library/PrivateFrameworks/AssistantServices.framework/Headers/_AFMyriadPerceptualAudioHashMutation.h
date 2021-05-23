/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFMyriadPerceptualAudioHash, NSData, NSString;

@interface _AFMyriadPerceptualAudioHashMutation : NSObject

{
    AFMyriadPerceptualAudioHash *_baseModel;
    NSData *_data;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasData:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setData:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;

@end
