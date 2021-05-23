/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface IMSPIRecentEvent : NSObject

{
    NSString *_handle;
    NSDate *_date;
    NSString *_labelID;
}

@property (retain) NSString *handle;
@property (retain) NSString *labelID;
@property (retain) NSDate *date;

- (id)description;
- (id)initWithHandle:(id)arg1 date:(id)arg2;
- (id)initWithLabelID:(id)arg1 date:(id)arg2;

@end
