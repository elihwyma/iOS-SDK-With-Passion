/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface _CDPSimpleDataPoint : NSObject

{
    _Bool _userIsSender;
    _Bool _userIsThreadInitiator;
    NSDate *_timestamp;
    NSArray *_peopleIdentifiers;
    NSString *_title;
}

@property (nonatomic) _Bool userIsSender;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSArray *peopleIdentifiers;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) _Bool userIsThreadInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
