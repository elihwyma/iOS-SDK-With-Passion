/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

#import <TestFlightCore/Swift-Protocol.h>

@class NSString;

@interface TFFeedbackHandleConfiguration : NSObject <Swift>

{
    NSString *_bundleIdentifier;
    NSString *_incidentId;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *incidentId;

+ (id)configurationFromUserInfo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)encodedAsUserInfo;

@end
