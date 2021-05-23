/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface ASFriendListSection : NSObject

{
    NSDate *_startDate;
    NSArray *_rows;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSArray *rows;
@property (nonatomic, readonly) NSDate *endDate;

- (id)initWithDate:(id)arg1 andRows:(id)arg2;
- (_Bool)containsFriendListRow:(id)arg1;

@end
