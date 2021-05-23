/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface SPSearchResultMarker : NSObject

{
    NSDate *_date;
}

@property (retain, nonatomic) NSDate *date;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
