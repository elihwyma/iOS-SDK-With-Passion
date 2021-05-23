/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class MCUIPayloadUserInputField, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MCUIFieldCollection : NSObject

{
    NSMutableArray *_payloadFieldArrays;
    long long _currentPayloadIndex;
    long long _currentFieldIndex;
    MCUIPayloadUserInputField *_currentField;
    _Bool _isFinalField;
}

- (id)initWithUserInput:(id)arg1;
- (void)_setCurrentFieldToCurrentIndices;
- (_Bool)currentFieldIsLastInPayload;
- (void)_setIsFinalField;
- (id)userInputResponses;
- (id)currentField;
- (void)moveToNextField;
- (void)restartCurrentPayload;
- (_Bool)currentFieldIsFinalField;
- (_Bool)currentFieldIsSinglePasswordField;
- (id)responseDictionariesForCurrentPayload;
- (long long)currentPayloadIndex;

@end
