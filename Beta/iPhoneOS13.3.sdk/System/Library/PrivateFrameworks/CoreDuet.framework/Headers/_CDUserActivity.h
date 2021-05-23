/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface _CDUserActivity : NSObject

{
    NSString *_bundleId;
    NSString *_type;
    NSString *_title;
    NSDate *_date;
    NSDictionary *_payload;
}

@property (copy) NSString *bundleId;
@property (copy) NSString *type;
@property (copy) NSString *title;
@property (copy) NSDate *date;
@property (copy) NSDictionary *payload;

+ (_Bool)supportsSecureCoding;
+ (id)createFromUserActivity:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
