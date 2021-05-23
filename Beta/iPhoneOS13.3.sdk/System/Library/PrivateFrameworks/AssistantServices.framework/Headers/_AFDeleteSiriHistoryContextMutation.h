/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFDeleteSiriHistoryContext, NSString;

@interface _AFDeleteSiriHistoryContextMutation : NSObject

{
    AFDeleteSiriHistoryContext *_baseModel;
    NSString *_successTitle;
    NSString *_successBody;
    NSString *_successButtonText;
    NSString *_errorTitle;
    NSString *_errorBody;
    NSString *_errorButtonText;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSuccessTitle:1;
        unsigned int hasSuccessBody:1;
        unsigned int hasSuccessButtonText:1;
        unsigned int hasErrorTitle:1;
        unsigned int hasErrorBody:1;
        unsigned int hasErrorButtonText:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setErrorTitle:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setSuccessTitle:(id)arg1;
- (void)setSuccessBody:(id)arg1;
- (void)setSuccessButtonText:(id)arg1;
- (void)setErrorBody:(id)arg1;
- (void)setErrorButtonText:(id)arg1;

@end
