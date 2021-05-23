/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface CPLResetReason : NSObject

{
    _Bool _tentative;
    NSString *_uuid;
    NSDate *_date;
    NSString *_reason;
}

@property (copy, nonatomic, readonly) id asPlist;
@property (copy, nonatomic, readonly) NSString *uuid;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic) _Bool tentative;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)initWithDate:(id)arg1 reason:(id)arg2;
- (id)reasonDescriptionWithNow:(id)arg1;

@end
