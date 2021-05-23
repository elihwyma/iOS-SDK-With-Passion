/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TPSCollectionStatus : NSObject

{
    _Bool _skipFeature;
    NSString *_identifier;
    NSDate *_activatedDate;
    NSDate *_firstViewedDate;
    NSDate *_featuredDate;
}

@property (nonatomic) _Bool skipFeature;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *activatedDate;
@property (copy, nonatomic) NSDate *firstViewedDate;
@property (copy, nonatomic) NSDate *featuredDate;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
