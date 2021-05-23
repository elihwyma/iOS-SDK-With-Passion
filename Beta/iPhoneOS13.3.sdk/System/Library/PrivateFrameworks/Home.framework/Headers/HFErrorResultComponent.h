/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemResultComponent.h>

@class HMSymptom, NSString, NSURL;

@interface HFErrorResultComponent : HFItemResultComponent

{
    _Bool _updateInProgress;
    unsigned long long _category;
    HMSymptom *_underlyingSymptom;
    NSString *_errorDescription;
    NSString *_detailedErrorDescription;
    long long _displayPriority;
    unsigned long long _badgeType;
    NSString *_errorMessageTitle;
    NSString *_errorMessageButtonTitle;
    NSURL *_errorHandlerURL;
    NSString *_errorHandlerURLText;
}

@property (nonatomic, readonly) unsigned long long category;
@property (retain, nonatomic) HMSymptom *underlyingSymptom;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *detailedErrorDescription;
@property (nonatomic) long long displayPriority;
@property (nonatomic) unsigned long long badgeType;
@property (copy, nonatomic) NSString *errorMessageTitle;
@property (copy, nonatomic) NSString *errorMessageButtonTitle;
@property (copy, nonatomic) NSURL *errorHandlerURL;
@property (copy, nonatomic) NSString *errorHandlerURLText;
@property (nonatomic) _Bool updateInProgress;

+ (id)componentForDisplayError:(id)arg1 symptomContextProvider:(id)arg2;
+ (id)componentForWriteErrorForCharacteristics:(id)arg1 valueSource:(id)arg2;
+ (id)componentForAccessoryReprovisionState:(unsigned long long)arg1;
+ (long long)priorityForCategory:(unsigned long long)arg1;
+ (id)componentForUnreachableAccessoryWithContextProvider:(id)arg1;
+ (id)componentForSymptom:(id)arg1 contextProvider:(id)arg2;
+ (_Bool)_requiresManualFixOptionToDisplaySymptom:(id)arg1;
+ (long long)_displayPriorityForSymptom:(id)arg1;

- (id)init;
- (id)results;
- (id)initWithCategory:(unsigned long long)arg1;
- (long long)componentPriority;
- (void)_addAccountSymptomMessageForAccountName:(id)arg1 symptom:(id)arg2;

@end
