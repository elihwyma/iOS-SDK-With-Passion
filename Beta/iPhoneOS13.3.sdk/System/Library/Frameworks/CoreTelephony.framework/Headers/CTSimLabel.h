/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CTSimLabel : NSObject

{
    NSString *_unique_id;
    NSString *_text;
}

@property (retain, nonatomic) NSString *unique_id;
@property (retain, nonatomic) NSString *text;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 andText:(id)arg2;

@end
