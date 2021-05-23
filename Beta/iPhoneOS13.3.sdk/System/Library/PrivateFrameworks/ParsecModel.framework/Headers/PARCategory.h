/*
 Image: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
 */

#import <CoreData/NSManagedObject.h>

@class PARUsageEvent;

@interface PARCategory : NSManagedObject

{
    _Bool isGoTo;
    _Bool isPunchout;
    _Bool isTop;
    int clientIntVal;
    int resultTypeIntVal;
}

@property (nonatomic) int clientIntVal;
@property (nonatomic) _Bool isGoTo;
@property (nonatomic) _Bool isPunchout;
@property (nonatomic) _Bool isTop;
@property (nonatomic) int resultTypeIntVal;
@property (retain, nonatomic) PARUsageEvent *usageEvent;

+ (id)fetchRequest;

@end
