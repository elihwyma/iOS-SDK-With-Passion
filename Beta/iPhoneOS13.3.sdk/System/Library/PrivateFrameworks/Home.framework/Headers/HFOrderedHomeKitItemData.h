/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface HFOrderedHomeKitItemData : NSObject

{
    NSUUID *_uniqueIdentifier;
    NSString *_title;
    NSDate *_dateAdded;
    NSString *_actionSetType;
}

@property (copy, nonatomic) NSUUID *uniqueIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *dateAdded;
@property (copy, nonatomic) NSString *actionSetType;

+ (id)dataWithUniqueIdentifier:(id)arg1 title:(id)arg2 dateAdded:(id)arg3;

@end
