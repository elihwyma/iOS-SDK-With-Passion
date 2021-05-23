/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <CoreTelephony/CTPlan.h>

@class NSString;

@interface CTPendingPlan : CTPlan

{
    NSString *_smdpURL;
    NSString *_matchingID;
}

@property (nonatomic, readonly) NSString *smdpURL;
@property (nonatomic, readonly) NSString *matchingID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSmdpURL:(id)arg1 matchingID:(id)arg2;

@end
