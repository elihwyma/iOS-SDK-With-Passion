/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@class NSArray, TIInputMode;

@protocol TIMultilingualPreferenceProviding <Swift>

@property (nonatomic, readonly) TIInputMode *preferredSecondaryInputMode;
@property (nonatomic, readonly) NSArray *userEnabledInputModes;
@property (nonatomic, readonly) NSArray *userPreferredLanguages;

@end
