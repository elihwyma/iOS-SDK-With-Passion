/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSArray, _DECItem, _DECLaunchInfo, _DECPrediction;

@interface _DECFeedback : NSObject

{
    _DECItem *_itemSelected;
    _DECLaunchInfo *_launchInfo;
    NSArray *_itemsShown;
    _DECPrediction *_prediction;
}

@property (retain, nonatomic) _DECItem *itemSelected;
@property (retain, nonatomic) _DECLaunchInfo *launchInfo;
@property (retain, nonatomic) NSArray *itemsShown;
@property (retain, nonatomic) _DECPrediction *prediction;

+ (_Bool)supportsSecureCoding;
+ (id)feedbackWithItemSelected:(id)arg1 launchInfo:(id)arg2 itemsShown:(id)arg3 prediction:(id)arg4;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemSelected:(id)arg1 launchInfo:(id)arg2 itemsShown:(id)arg3 prediction:(id)arg4;
- (_Bool)relevantLaunch;
- (id)predictedItemsShown;
- (unsigned long long)outcomeForCategory:(unsigned long long)arg1 predictions:(id)arg2;
- (unsigned long long)outcomeForCategory:(unsigned long long)arg1;
- (unsigned long long)outcomeForCategory:(unsigned long long)arg1 predictionItem:(id)arg2;

@end
