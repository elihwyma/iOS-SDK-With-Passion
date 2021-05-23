/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCCKMultiFetchRecordSpec : NSObject

{
    _Bool _shortcut;
    NSString *_recordType;
    NSArray *_desiredKeys;
    NSArray *_fetchKeys;
}

@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) NSArray *fetchKeys;
@property (nonatomic) _Bool shortcut;

@end
