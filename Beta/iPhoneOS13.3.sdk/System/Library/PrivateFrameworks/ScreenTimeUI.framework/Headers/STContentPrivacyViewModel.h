/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSSet, NSString, STCommunicationLimits;

__attribute__((visibility("hidden")))
@interface STContentPrivacyViewModel : NSObject

{
    _Bool _isLoaded;
    _Bool _isLocalDevice;
    _Bool _restrictionsEnabled;
    _Bool _shouldAllowEditing;
    NSString *_userName;
    NSNumber *_userDSID;
    NSMutableDictionary *_valuesByRestriction;
    STCommunicationLimits *_communicationLimits;
    NSSet *_visibleRestrictions;
}

@property (copy, nonatomic) NSSet *visibleRestrictions;
@property (nonatomic) _Bool isLoaded;
@property (nonatomic) _Bool isLocalDevice;
@property (nonatomic) _Bool restrictionsEnabled;
@property (nonatomic) _Bool shouldAllowEditing;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSNumber *userDSID;
@property (retain, nonatomic) NSMutableDictionary *valuesByRestriction;
@property (retain) STCommunicationLimits *communicationLimits;

- (id)init;
- (id)defaultValueForRestriction:(id)arg1;
- (id)visibleRestrictionWithConfiguration:(id)arg1 key:(id)arg2;

@end
