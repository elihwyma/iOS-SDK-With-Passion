/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSReportItem.h>

@class NSString;

@interface CLSActivityReportItem : CLSReportItem

{
    NSString *_title;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;

@end
