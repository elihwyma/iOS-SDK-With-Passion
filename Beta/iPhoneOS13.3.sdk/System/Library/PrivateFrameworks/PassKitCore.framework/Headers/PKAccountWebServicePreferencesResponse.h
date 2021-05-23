/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKAccountPreferences;

@interface PKAccountWebServicePreferencesResponse : PKAccountWebServiceResponse

{
    PKAccountPreferences *_preferences;
}

@property (copy, nonatomic, readonly) PKAccountPreferences *preferences;

- (id)initWithData:(id)arg1;

@end
