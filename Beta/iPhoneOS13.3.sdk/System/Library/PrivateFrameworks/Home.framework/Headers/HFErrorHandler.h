/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFErrorHandler : NSObject

{
    _Bool _presentingAlert;
}

@property (nonatomic, getter=isPresentingAlert) _Bool presentingAlert;

+ (id)sharedHandler;
+ (id)descriptionLocalizationKeyForError:(id)arg1;
+ (id)_descriptionForHMErrorCode:(long long)arg1;
+ (id)_descriptionForHFErrorCode:(long long)arg1;

- (id)init;
- (void)handleError:(id)arg1;
- (void)logError:(id)arg1 operationDescription:(id)arg2;
- (void)handleError:(id)arg1 operationType:(id)arg2 options:(id)arg3 retryBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (_Bool)_isErrorIndicativeOfApplicationBug:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (_Bool)canIgnoreError:(id)arg1;
- (id)_localizedTitleForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (id)_localizedDescriptionForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (_Bool)_isErrorPermanent:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (id)_localizedStringOrNilIfNotFoundForKey:(id)arg1;
- (void)handleError:(id)arg1 retryBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;

@end
