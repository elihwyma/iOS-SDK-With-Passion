/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface STUIAskForTimeRequestResponse : NSObject

{
    unsigned long long _usageType;
    NSString *_identifier;
    NSString *_budgetedIdentifier;
    NSNumber *_requestingUserDSID;
}

@property (nonatomic) unsigned long long usageType;
@property (nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) NSString *budgetedIdentifier;
@property (retain, nonatomic) NSNumber *requestingUserDSID;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestResponse:(id)arg1;

@end
