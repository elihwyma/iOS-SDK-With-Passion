/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TIInputMode;

@interface _TIMultilingualPreferences : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) TIInputMode *preferredSecondaryInputMode;
@property (nonatomic, readonly) NSArray *userEnabledInputModes;
@property (nonatomic, readonly) NSArray *userPreferredLanguages;

+ (id)inputModesForIdentifiers:(id)arg1;

@end
