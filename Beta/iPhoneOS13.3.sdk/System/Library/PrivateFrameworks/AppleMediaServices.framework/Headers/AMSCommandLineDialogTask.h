/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSCommandLineDialogTask : AMSTask

{
    AMSDialogRequest *_request;
    double _maximumDialogWidth;
    double _minimumDialogWidth;
    double _dialogPadding;
}

@property (nonatomic, readonly) AMSDialogRequest *request;
@property (nonatomic) double maximumDialogWidth;
@property (nonatomic) double minimumDialogWidth;
@property (nonatomic) double dialogPadding;

- (id)present;
- (id)initWithRequest:(id)arg1;
- (id)_createHorizontolLineWithWidth:(long long)arg1;
- (id)_createText:(id)arg1 width:(long long)arg2 centered:(_Bool)arg3 omitLeftPipe:(_Bool)arg4;
- (id)_createTextfieldWithTextfield:(id)arg1 width:(long long)arg2;
- (id)_createLinesFromText:(id)arg1 width:(long long)arg2;
- (void)_printMessage:(id)arg1;
- (id)_gatherTextfieldInput;
- (long long)_gatherButtonInput;
- (id)_getUserInput;

@end
