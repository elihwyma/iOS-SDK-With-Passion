/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFBluetoothHeadphoneInEarDetectionState, NSString;

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject

{
    AFBluetoothHeadphoneInEarDetectionState *_baseModel;
    _Bool _isEnabled;
    long long _primaryEarbudSide;
    long long _primaryInEarStatus;
    long long _secondaryInEarStatus;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIsEnabled:1;
        unsigned int hasPrimaryEarbudSide:1;
        unsigned int hasPrimaryInEarStatus:1;
        unsigned int hasSecondaryInEarStatus:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setIsEnabled:(_Bool)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;
- (void)setPrimaryEarbudSide:(long long)arg1;
- (void)setPrimaryInEarStatus:(long long)arg1;
- (void)setSecondaryInEarStatus:(long long)arg1;

@end
