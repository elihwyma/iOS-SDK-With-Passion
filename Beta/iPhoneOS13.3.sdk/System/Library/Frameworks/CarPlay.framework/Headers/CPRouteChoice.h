/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSArray, NSUUID;

@interface CPRouteChoice : NSObject

{
    NSArray *_summaryVariants;
    NSArray *_selectionSummaryVariants;
    NSArray *_additionalInformationVariants;
    id _userInfo;
    NSUUID *_identifier;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSArray *summaryVariants;
@property (copy, nonatomic) NSArray *additionalInformationVariants;
@property (copy, nonatomic) NSArray *selectionSummaryVariants;
@property (retain, nonatomic) id userInfo;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSummaryVariants:(id)arg1 additionalInformationVariants:(id)arg2 selectionSummaryVariants:(id)arg3;

@end
