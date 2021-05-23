/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CalDAVMove : NSObject

{
    int _sourceCalendarID;
    int _itemID;
    int _changeID;
    NSString *_oldExternalID;
    long long _objectType;
}

@property (nonatomic) int sourceCalendarID;
@property (nonatomic) int itemID;
@property (retain, nonatomic) NSString *oldExternalID;
@property (nonatomic) int changeID;
@property (nonatomic) long long objectType;

- (id)initWithSourceCalendarID:(int)arg1 itemID:(int)arg2 oldExternalID:(id)arg3 changeID:(int)arg4 objectType:(long long)arg5;

@end
