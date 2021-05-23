/*
 Image: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
 */

#import <ParsecModel/PAREvent.h>

@class PARCategory;

@interface PARUsageEvent : PAREvent

{
    PARCategory *usageCategory;
}

@property (retain, nonatomic) PARCategory *usageCategory;

+ (id)fetchRequest;

@end
